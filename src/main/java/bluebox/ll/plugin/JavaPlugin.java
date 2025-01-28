package bluebox.ll.plugin;

import bluebox.ll.Logger;
import bluebox.ll.LoggerStream;
import com.google.gson.Gson;
import com.google.gson.GsonBuilder;
import org.jetbrains.annotations.NotNull;

import java.io.File;
import java.io.PrintStream;
import java.net.MalformedURLException;
import java.net.URL;
import java.net.URLClassLoader;

abstract public class JavaPlugin implements Plugin{
    private Logger logger;
    private PrintStream errStream;
    private Manifest manifest;
    private File modDir;
    private URLClassLoader classLoader;
    private boolean isInit=false;
    public final Manifest getManifest(){
        return manifest;
    }
    public final File getDataFolder(){
        File folder=new File(modDir,"data");
        if(!folder.exists()) folder.mkdirs();
        return folder;
    }
    public final boolean isInitialized(){
        return isInit;
    }
    @Override
    public final Logger getLogger() {
        return logger;
    }
    public final PrintStream getErrorStream() {
        return errStream;
    }

    abstract protected void onLoad();
    abstract protected void onEnable();
    protected void onUnload(){
        throw new UnsupportedOperationException("onUnload() is not implemented");
    }
    abstract protected void onDisable();
    protected static void init(JavaPlugin plugin, Manifest manifest,URLClassLoader classLoader){
        if(plugin.isInit) throw new RuntimeException("Plugin is already initialized");
        plugin.isInit=true;
        plugin.manifest=manifest;
        plugin.modDir=new File(LeviLamina.getModRootDir(),manifest.entry);
        plugin.logger=new Logger(manifest.name);
        plugin.errStream=new PrintStream(new LoggerStream(plugin.logger,LoggerStream.PrintMode.ERROR),true);
        plugin.classLoader=classLoader;
    }
    public final URLClassLoader getClassLoader(){
        return classLoader;
    }
}
