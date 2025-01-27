package bluebox.ll.gui;

abstract public class CustomElement {
    protected final int LABEL       =0;
    protected final int DROP_DOWN   =1;
    protected final int INPUT       =2;
    protected final int SLIDER      =3;
    protected final int TEXT_SLIDER =4;
    protected final int TOGGLE      =5;
    abstract protected void draw(long formPtr,int index);
    abstract protected int getId();
}
