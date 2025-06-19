package bluebox.ll.plugin;

import bluebox.ll.config.Configurable;
import com.google.gson.annotations.Expose;

public class Dependency implements Configurable {
    @Expose public String name;
    @Expose public String version;
}
