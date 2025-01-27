package bluebox.ll.gui;

import org.jetbrains.annotations.NotNull;

public class Input extends CustomElement {
    @Override
    protected native void draw(long formPtr,int index);

    @Override
    protected int getId() {
        return INPUT;
    }

    @NotNull public String title="";
    @NotNull public String defaultValue="";
    @NotNull public String placeholder="";
    public Input(){}
    public Input(@NotNull String title, @NotNull String defaultValue, @NotNull String placeholder){
        this.title=title;
        this.defaultValue=defaultValue;
        this.placeholder=placeholder;
    }
}
