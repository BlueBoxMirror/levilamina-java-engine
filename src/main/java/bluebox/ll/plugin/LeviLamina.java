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
    private static final LinkedList<Manifest> preloadMods=new LinkedList<>();
    private static final Gson gson=new GsonBuilder().excludeFieldsWithoutExposeAnnotation().create();
    private static File modRootDir;
    private static Logger logger;
    private static URLClassLoader classLoader;
    public static ClassLoader getClassLoader(){
        return classLoader;
    }

    private static void init(){
        System.setErr(getErrorStream());
        System.setOut(getOutputStream());
    }


    public static File getModRootDir(){
        return modRootDir;
    }
    public static Logger getLogger(){
        return logger;
    }
    public static PrintStream getErrorStream(){
        return new PrintStream(new LoggerStream(logger,LoggerStream.MODE_ERROR),true);
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
        if(classLoader!=null) throw new IllegalStateException("Plugins already enabled");
        try {
            File modDir=new File(modDirPath);
            File manifestFile=new File(modDir,"manifest.json");
            Manifest manifest=gson.fromJson(new FileReader(manifestFile,StandardCharsets.UTF_8),Manifest.class);
            File entryFile=new File(modDir,manifest.entry);
            if(!entryFile.exists()){
                throw new IllegalArgumentException("Entry file not found: "+entryFile.getAbsolutePath());
            }
            if(manifest.entryClass==null){
                throw new IllegalArgumentException("Entry class not specified in manifest,you need to specify it at manifest.json/entryClass");
            }
            preloadMods.add(manifest);
            logger.info("Loaded plugin "+manifest.name+" from "+modDirPath);
        } catch (Exception e) {
            throw new RuntimeException(e);
        }
    }

    private static void enable(){
        LinkedList<URL> urls=new LinkedList<>();
        for (Manifest manifest : preloadMods) {
            File modDir=new File(getModRootDir(),manifest.name);
            File entryFile=new File(modDir,manifest.entry);
            try {
                urls.add(entryFile.toURI().toURL());
            } catch (MalformedURLException e) {
                e.printStackTrace(getErrorStream());
            }
        }
        classLoader=new URLClassLoader(urls.toArray(new URL[0]));
        for (Manifest manifest : preloadMods) {
            try {
                Class<JavaPlugin> pluginClass=(Class<JavaPlugin>) classLoader.loadClass(manifest.entryClass);
                Constructor<JavaPlugin> pluginConstructor= pluginClass.getConstructor();
                JavaPlugin plugin=pluginConstructor.newInstance();
                JavaPlugin.init(plugin,manifest);
                plugin.onEnable();
                getLogger().info("Enabled plugin "+manifest.name);
                mods.put(manifest.name,plugin);
            } catch (Exception e) {
                removeModInNative(manifest.name);
                e.printStackTrace(getErrorStream());
            }
        }
    }
    private static void disable(){
        for (JavaPlugin plugin : mods.values().toArray(new JavaPlugin[0])) {
            plugin.disable();
        }
    }
    protected static void removeMod(String name){
        if(mods.remove(name)!=null) removeModInNative(name);
    }
    private static native void removeModInNative(String name);
}