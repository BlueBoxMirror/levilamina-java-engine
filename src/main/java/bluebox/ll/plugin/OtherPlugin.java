package bluebox.ll.plugin;

import bluebox.ll.Logger;

import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.nio.charset.StandardCharsets;

public class OtherPlugin implements Plugin {
    private OtherPlugin(String name,Logger logger){
        this.name=name;
        this.logger=logger;
        try {
            manifest=gson.fromJson(new FileReader(new File(getModDir(),"manifest.json"), StandardCharsets.UTF_8), Manifest.class);
        } catch (IOException e) {
            throw new RuntimeException(e);
        }
    }
    private final String name;
    private final Manifest manifest;
    private final Logger logger;
    @Override
    public Manifest getManifest() {
        return manifest;
    }
    @Override
    public String getName(){
        return name;
    }
    @Override
    public Logger getLogger(){
        return logger;
    }
}
