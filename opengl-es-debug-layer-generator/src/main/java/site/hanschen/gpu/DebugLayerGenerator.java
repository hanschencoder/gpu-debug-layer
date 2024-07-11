package site.hanschen.gpu;

import org.apache.commons.io.FileUtils;
import org.apache.commons.io.IOUtils;

import java.io.File;
import java.io.IOException;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashSet;
import java.util.List;
import java.util.Set;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/**
 * @author chenhang
 */
public class DebugLayerGenerator {

    private static final Pattern sPattern = Pattern.compile("\\((.*?)\\)");
    private final Set<String> mFunctionSet = new HashSet<>();


    private final String[] mLongType = new String[]{"GLsizeiptr", "GLintptr"};

    private final String[] mIntegerType =
            new String[]{"GLint", "GLsizei", "EGLNativeFileDescriptorKHR", "GLshort", "EGLint", "GLclampx", "GLfixed", "EGLint", "GLclampx",
                    "GLfixed"};
    private final String[] mUnsignedIntegerType =
            new String[]{"EGLenum", "GLbitfield", "GLenum", "GLuint", "GLboolean", "GLubyte", "GLubyte"};
    private final String[] mInteger64Type = new String[]{"GLint64EXT", "EGLnsecsANDROID"};
    private final String[] mUnsignedInteger64Type = new String[]{"GLuint64", "GLuint64EXT", "EGLuint64KHR", "EGLTimeKHR"};
    private final String[] mFloatType = new String[]{"GLdouble", "GLfloat", "GLclampf"};
    private final String[] mStringType = new String[]{"GLchar**", "GLchar*", "char*"};
    private final String[] mPointType =
            new String[]{"void*", "GLfixed*", "EGLSurface", "EGLDisplay", "GLuint64EXT*", "GLint*", "GLsync", "EGLClientBuffer",
                    "GLeglClientBufferEXT", "EGLint*", "GLboolean*", "AHardwareBuffer*", "EGLnsecsANDROID*", "GLdouble*", "EGLAttrib*",
                    "GLenum*",
                    "GLsizei*", "EGLConfig*", "EGLTimeKHR*", "EGLuint64KHR*", "GLubyte*", "GLuint64*", "GLfloat*", "GLuint*", "GLint64EXT*",
                    "GLshort*", "GLint64*", "EGLImageKHR", "EGLNativeDisplayType", "NativeWindowType", "EGLSync", "EGLSyncKHR",
                    "NativePixmapType", "EGLConfig", "GLDEBUGPROC", "GLDEBUGPROCKHR", "EGLImage", "EGLContext", "GLeglImageOES",
                    "EGLStreamKHR", "void**"};

    public static void main(String[] args) throws IOException {
        DebugLayerGenerator generator = new DebugLayerGenerator();
        try {
            generator.generate(new File("../app/src/main/cpp/opengl_es_layer_function.h"), new File("entries/platform_entries.in"),
                    new File("entries/egl_entries.in"), new File("entries/entries.in"));
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public DebugLayerGenerator() {
    }

    public void generate(File outputFile, File... inputFiles) throws IOException {
        System.out.println("Debug layer generator start...");
        System.out.println("inputDir: " + Arrays.toString(inputFiles));
        System.out.println("outFile : " + outputFile.getAbsolutePath());

        FileUtils.forceMkdirParent(outputFile);
        StringBuilder builder = new StringBuilder();
        for (File inputFile : inputFiles) {
            String content = IOUtils.toString(Files.newInputStream(inputFile.toPath()), StandardCharsets.UTF_8);
            String[] lines = content.split("\n");
            for (String line : lines) {
                forEachLine(builder, line);
            }
        }

        builder.append("EGLFuncPointer hookFunction(const char* funcName) {\n");
        for (String funcName : mFunctionSet) {
            builder.append(String.format("    GETPROCADDR(%s)\n", funcName));
        }
        builder.append("    return nullptr;\n}\n");
        System.out.println(builder);
        IOUtils.write(builder.toString(), Files.newOutputStream(outputFile.toPath()), StandardCharsets.UTF_8);
    }

    private String resolveFormat(String type) {
        if (Arrays.asList(mIntegerType).contains(type)) {
            return "%d";
        } else if (Arrays.asList(mUnsignedIntegerType).contains(type)) {
            return "%u";
        } else if (Arrays.asList(mLongType).contains(type)) {
            return "%ld";
        } else if (Arrays.asList(mInteger64Type).contains(type)) {
            return "%\" PRId64 \"";
        } else if (Arrays.asList(mUnsignedInteger64Type).contains(type)) {
            return "%\" PRIu64 \"";
        } else if (Arrays.asList(mFloatType).contains(type)) {
            return "%f";
        } else if (Arrays.asList(mStringType).contains(type)) {
            return "%s";
        } else if (Arrays.asList(mPointType).contains(type)) {
            return "%p";
        } else {
            throw new RuntimeException("unknown type: " + type);
        }
    }

    private void forEachLine(StringBuilder builder, String line) {
        if (!line.startsWith("EGL_ENTRY") && !line.startsWith("GL_ENTRY")) {
            return;
        }
        Matcher matcher = sPattern.matcher(line);
        if (!matcher.find()) {
            throw new RuntimeException("pattern not match: " + line);
        }
        String[] parts = matcher.group(1).split(",");
        if (parts.length < 2) {
            throw new RuntimeException("parts length < 2: " + line);
        }

        String returnType = parts[0].trim();
        String funcName = parts[1].trim();
        if (mFunctionSet.contains(funcName)) {
            return;
        }

        List<Pair<String, String>> params = new ArrayList<>();
        int index = 0;
        for (int i = 2; i < parts.length; i++) {
            String[] paramParts = parts[i].replace("const", "").trim().split(" ");

            String type = paramParts[0];
            String name;
            if (paramParts.length == 1) {
                name = "param" + index++;
            } else if (paramParts.length == 2 && paramParts[1].equals("*")) {
                type = type + "*";
                name = "param" + index++;
            } else if (paramParts.length == 2 && paramParts[1].startsWith("*")) {
                type = type + "*";
                name = paramParts[1].substring(1);
            } else if (paramParts.length == 2) {
                name = paramParts[1];
            } else if (paramParts.length == 3 && paramParts[1].equals("*")) {
                type = type + "*";
                name = "param" + index++;
            } else {
                throw new RuntimeException("invalid paramParts: " + line);
            }

            if (name.startsWith("*")) {
                type = type + "*";
                name = name.substring(1);
            }
            params.add(Pair.create(type, name));
        }

        builder.append(returnType).append(" opengl_es_layer_").append(funcName).append("(");
        for (Pair<String, String> param : params) {
            builder.append(param.first).append(" ");
            if (!param.first.equals("void")) {
                builder.append(param.second);
            }
            builder.append(", ");
        }
        if (params.size() > 0) {
            builder.delete(builder.length() - 2, builder.length());
        }
        builder.append(") {\n");


        StringBuilder paramsStr = new StringBuilder();
        StringBuilder valueStr = new StringBuilder();
        StringBuilder formatStr = new StringBuilder();
        StringBuilder formatValueStr = new StringBuilder();
        for (Pair<String, String> param : params) {
            paramsStr.append(param.first).append(", ");
            if (!param.first.equals("void")) {
                valueStr.append(param.second).append(", ");
                if (param.first.endsWith("**")) {
                    formatValueStr.append("*").append(param.second).append(", ");
                } else {
                    formatValueStr.append(param.second).append(", ");
                }
                formatStr.append(resolveFormat(param.first)).append(", ");
            }
        }
        if (paramsStr.toString().endsWith(", ")) {
            paramsStr.delete(paramsStr.length() - 2, paramsStr.length());
        }
        if (valueStr.toString().endsWith(", ")) {
            valueStr.delete(valueStr.length() - 2, valueStr.length());
        }
        if (formatValueStr.toString().endsWith(", ")) {
            formatValueStr.delete(formatValueStr.length() - 2, formatValueStr.length());
        }
        if (formatStr.toString().endsWith(", ")) {
            formatStr.delete(formatStr.length() - 2, formatStr.length());
        }

        builder.append(String.format(
                        "    memset(mDebugMessage, 0, sizeof(mDebugMessage));\n" +
                        "    if (mEnableLogParams) {\n" +
                        "        if (mEnableIndex) {\n" +
                        "            sprintf(mDebugMessage, \"%%\" PRIu64 \": d_%%s(%s)\", mCmdIndex++, \"%s\"%s%s);\n" +
                        "        } else {\n" +
                        "            sprintf(mDebugMessage, \"d_%%s(%s)\", \"%s\"%s%s);\n" +
                        "        }\n" +
                        "    } else {\n" +
                        "        if (mEnableIndex) {\n" +
                        "            sprintf(mDebugMessage, \"%%\" PRIu64 \": d_%%s\", mCmdIndex++, \"%s\");\n" +
                        "        } else {\n" +
                        "            sprintf(mDebugMessage, \"d_%%s\", \"%s\");\n" +
                        "        }\n" +
                        "    }\n" +
                        "    ATRACE_NAME_IF(mEnableTrace, mDebugMessage);\n" +
                        "    GL_FINISH_IF(mEnableGlFinish, \"%s\");\n" +
                        "    logMessageIf(mEnableLog, mDebugMessage);\n" +
                        "    auto it = functionMap.find(\"%s\");\n" +
                        "    if (it == functionMap.end()) {\n" +
                        "        ALOGE(\"%%s\", \"Unable to find functionMap entry for %s\");\n" +
                        "    }\n\n" +
                        "    typedef %s (*PFN%sPROC)(%s);\n" +
                        "    PFN%sPROC next = reinterpret_cast<PFN%sPROC>(it->second);\n" +
                        "    return next(%s);\n",
                formatStr, funcName, (valueStr.length() > 0 ? ", " : ""),formatValueStr,
                formatStr, funcName, (valueStr.length() > 0 ? ", " : ""),formatValueStr,
                funcName,
                funcName,
                funcName,
                funcName,
                funcName,
                returnType,
                funcName.toUpperCase(), paramsStr, funcName.toUpperCase(), funcName.toUpperCase(), valueStr));

        builder.append("}\n\n");

        mFunctionSet.add(funcName);
    }
}
