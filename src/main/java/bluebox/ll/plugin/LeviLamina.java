package bluebox.ll.plugin;


import bluebox.ll.Logger;
import bluebox.ll.LoggerStream;
import com.google.gson.Gson;
import com.google.gson.GsonBuilder;

import java.io.*;
import java.lang.reflect.Constructor;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.net.MalformedURLException;
import java.net.URL;
import java.net.URLClassLoader;
import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.zip.ZipFile;

public class LeviLamina{
    private static final HashMap<String, JavaPlugin> mods=new HashMap<>();
    private static final HashMap<String,Manifest> preloadMods=new HashMap<>();
    private static final Gson gson=new GsonBuilder().excludeFieldsWithoutExposeAnnotation().create();
    private static File modRootDir;
    private static Logger logger;
    private static URLClassLoader classLoader;
    private static boolean isPreloaded=false;
    private static void init(File modRootDir,Logger logger){
        LeviLamina.modRootDir=modRootDir;
        LeviLamina.logger=logger;
        System.setErr(getErrorStream());
        System.setOut(getOutputStream());
    }
    public static ClassLoader getClassLoader(){
        return classLoader;
    }
    public static File getModRootDir(){
        return modRootDir;
    }
    public static Logger getLogger(){
        return logger;
    }
    public static PrintStream getErrorStream(){
        return new PrintStream(new LoggerStream(logger,LoggerStream.PrintMode.ERROR),true);
    }
    public static PrintStream getOutputStream(){
        return new PrintStream(new LoggerStream(logger),true);
    }
    public static Plugin getPlugin(String name){
        if(!hasPlugin(name)) throw new IllegalArgumentException("Plugin "+name+" not found");
        if(mods.containsKey(name)) return mods.get(name);
        return getNativePlugin(name);
    }
    public static native boolean hasPlugin(String name);
    private static native Plugin getNativePlugin(String name);

    private static void addPlugin(String modDirPath){
        try {
            File modDir=new File(modDirPath);
            File manifestFile=new File(modDir,"manifest.json");
            Manifest manifest=gson.fromJson(new FileReader(manifestFile,StandardCharsets.UTF_8),Manifest.class);
            if(manifest.entryClass==null){
                throw new IllegalArgumentException("Entry class not specified in manifest,you need to specify it at manifest.json/entryClass");
            }
            if(manifest.isLibrary && isPreloaded && !preloadMods.containsKey(manifest.name)){
                throw new IllegalArgumentException("Library plugin can only loaded at first time");
            }

            URLClassLoader classLoader=manifest.isLibrary?LeviLamina.classLoader:new URLClassLoader(new URL[]{new File(modDir,manifest.entry).toURI().toURL()},LeviLamina.class.getClassLoader());
            Class<JavaPlugin> pluginClass=(Class<JavaPlugin>) classLoader.loadClass(manifest.entryClass);
            Constructor<JavaPlugin> pluginConstructor= pluginClass.getConstructor();
            JavaPlugin plugin=pluginConstructor.newInstance();
            JavaPlugin.init(plugin,manifest,classLoader);
            plugin.onLoad();
            if(isPreloaded) plugin.onEnable();
            getLogger().info("Loading plugin "+manifest.name);
            mods.put(manifest.name,plugin);
        } catch (Exception e) {
            throw new RuntimeException(e);
        }
    }

    private static void load(){
        LinkedList<URL> urls=new LinkedList<>();
        for (File dir : getModRootDir().listFiles()) {
            try {
                if(dir.isDirectory()){
                    File manifestFile=new File(dir,"manifest.json");
                    if(!manifestFile.exists()) continue;
                    Manifest manifest=gson.fromJson(new FileReader(manifestFile,StandardCharsets.UTF_8),Manifest.class);
                    if(manifest.type==null || !manifest.type.equals("jvm")) continue;
                    if(manifest.name==null || manifest.entry==null || manifest.entryClass==null) continue;
                    File entryFile=new File(dir,manifest.entry);
                    if(!entryFile.exists() || !entryFile.isFile()) continue;
                    preloadMods.put(manifest.name,manifest);
                    if(manifest.isLibrary) urls.add(entryFile.toURI().toURL());
                }
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        }
        classLoader=new URLClassLoader(urls.toArray(new URL[0]));
    }

    private static void enable(){
        isPreloaded=true;
        for (JavaPlugin plugin : mods.values().toArray(new JavaPlugin[0])) {
            try {
                plugin.onEnable();
            } catch (Exception e) {
                e.printStackTrace(plugin.getErrorStream());
            }
        }
    }
    private static void disable(){
        for (JavaPlugin plugin : mods.values().toArray(new JavaPlugin[0])) {
            try {
                plugin.onDisable();
            } catch (Exception e) {
                e.printStackTrace(new PrintStream(new LoggerStream(plugin.getLogger(),LoggerStream.PrintMode.WARN),true));
            }
        }
    }
    private static boolean unload(String name){
        JavaPlugin plugin=mods.get(name);
        if(plugin==null) return false;
        try {
            plugin.onUnload();
            mods.remove(name);
            return true;
        }catch (Exception e){
            e.printStackTrace(plugin.getErrorStream());
            return false;
        }
    }
}