package bluebox.ll.plugin;

import com.google.gson.annotations.Expose;

public class Manifest{
    @Expose public String name;
    @Expose public String entry;
    @Expose public String type;
    @Expose public Dependency[] dependencies;
    @Expose public boolean isLibrary=false;
    @Expose public Dependency[] optionalDependencies;
    @Expose public String version;
    @Expose public String description;
    @Expose public String author;
    @Expose public String entryClass;
}
