package bluebox.ll.gui;

public class Label extends CustomElement{
    public Label(String text) {
        this.text = text;
    }
    public Label(){
        this.text = "";
    }
    public String text;
    @Override
    public native void draw(long customFormPtr);
}
