import org.gradle.kotlin.dsl.support.KotlinCompilerOptions
import org.gradle.kotlin.dsl.support.kotlinCompilerOptions

plugins {
    id("java")
}

group = "bluebox.ll"
version = "0.0.1-alpha"

repositories {
    mavenCentral()
}


dependencies {
    implementation("com.google.code.gson:gson:2.8.9")
    implementation("org.jetbrains:annotations:23.0.0")
}


tasks.withType<Javadoc> {
    options.encoding = "UTF-8"
    title = "${project.name} ${project.version} 文档"
    isFailOnError = false
    source = sourceSets.main.get().allJava
    classpath = sourceSets.main.get().compileClasspath
}

tasks.withType<Jar>{
    archiveFileName.set("LeviLaminaJavaEngine.jar")
    destinationDirectory.set(file("bin/levilamina-java-engine"))
    from(sourceSets.main.get().output)
    dependsOn(configurations.runtimeClasspath)
    from({
        configurations.runtimeClasspath.get().filter { it.name.endsWith("jar") }.map { zipTree(it) }
    })
    manifest{
        attributes["Main-Class"] = "bluebox.jnihelper.MainKt"
    }
}

tasks.withType<JavaCompile>{
    options.compilerArgs.add("-parameters")
}