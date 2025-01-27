package bluebox.ll.gui;

import org.jetbrains.annotations.NotNull;

public class Toggle extends CustomElement{
    @NotNull public String title="";
    public boolean defaultValue=false;
    public Toggle(@NotNull String title, boolean defaultValue){
        this.title=title;
        this.defaultValue=defaultValue;
    }
    public Toggle(){}

    @Override
    protected native void draw(long formPtr,int index);

    @Override
    protected int getId() {
        return TOGGLE;
    }
}
