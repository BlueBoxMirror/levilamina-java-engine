package bluebox.ll.gui;

import org.jetbrains.annotations.NotNull;

public class Label extends CustomElement {
    @NotNull public String text="";

    public Label(@NotNull String text) {
        this.text = text;
    }
    public Label() {}

    @Override
    protected native void draw(long formPtr,int index);

    @Override
    protected int getId() {
        return 0;
    }
}
