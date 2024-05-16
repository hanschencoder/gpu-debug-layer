plugins {
    application
}

java {
    toolchain {
        languageVersion = JavaLanguageVersion.of(8)
    }
}

application {
    mainClass = "site.hanschen.gpu.DebugLayerGenerator"
}

dependencies {
    implementation("commons-io:commons-io:2.13.0")
}