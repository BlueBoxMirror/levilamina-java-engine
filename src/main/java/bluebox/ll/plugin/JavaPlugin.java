package bluebox.ll.plugin;

import bluebox.ll.Logger;
import bluebox.ll.LoggerStream;
import com.google.gson.Gson;
import com.google.gson.GsonBuilder;

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
    private boolean isInit=false;
    public Manifest getManifest(){
        return manifest;
    }
    public File getDataFolder(){
        File folder=new File(modDir,"data");
        if(!folder.exists()) folder.mkdirs();
        return folder;
    }
    public boolean isInitialized(){
        return isInit;
    }
    @Override
    public Logger getLogger() {
        return logger;
    }
    public PrintStream getErrorStream() {
        return errStream;
    }

    abstract protected void onEnable();
    abstract protected void onDisable();
    protected static void init(JavaPlugin plugin, Manifest manifest){
        if(plugin.isInit) throw new RuntimeException("Plugin is already initialized");
        plugin.isInit=true;
        plugin.manifest=manifest;
        plugin.modDir=new File(LeviLamina.getModRootDir(),manifest.entry);
        plugin.logger=new Logger(manifest.name);
        plugin.errStream=new PrintStream(new LoggerStream(plugin.logger,LoggerStream.MODE_ERROR));
    }
    @Override
    public void disable(){
        try {
            onDisable();
            LeviLamina.removeMod(this.getName());
        } catch (Exception e) {
            e.printStackTrace(getErrorStream());
        }
    }
}
