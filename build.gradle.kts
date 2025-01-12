plugins {
    id("java")
}

group = "bluebox.levilamina.engine"
version = "0.0.1-alpha"

repositories {
    mavenCentral()
}

dependencies {
    implementation("com.google.code.gson:gson:2.8.9")
    implementation("org.jetbrains:annotations:23.0.0")

    testImplementation(platform("org.junit:junit-bom:5.10.0"))
    testImplementation("org.junit.jupiter:junit-jupiter")
}

tasks.test {
    useJUnitPlatform()
}

tasks.withType<Javadoc> {
    options.encoding = "UTF-8"
    title = "Documentation for ${project.name} ${project.version}"
    isFailOnError = false
    source = sourceSets.main.get().allJava
    classpath = sourceSets.main.get().compileClasspath
}