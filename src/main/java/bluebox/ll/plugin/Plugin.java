package bluebox.ll.plugin;

import bluebox.ll.Logger;
import com.google.gson.Gson;
import com.google.gson.GsonBuilder;

import java.io.File;

public interface Plugin {
    Gson gson=new GsonBuilder().setPrettyPrinting().excludeFieldsWithoutExposeAnnotation().create();
    Manifest getManifest();
    default String getName(){
        return getManifest().name;
    }
    default File getModDir(){
        return new File(LeviLamina.getModRootDir(),getName());
    }
    Logger getLogger();
}
