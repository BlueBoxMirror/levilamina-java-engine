package bluebox.ll.gui;

import org.jetbrains.annotations.NotNull;

public class Slider extends CustomElement{
    @Override
    protected native void draw(long formPtr,int index);

    @Override
    protected int getId() {
        return SLIDER;
    }

    @NotNull public String title="";
    public double defaultValue=0;
    public double minValue=0;
    public double maxValue=100;
    public double step=1;
    public Slider(){}
    public Slider(@NotNull String title, double defaultValue, double minValue, double maxValue, double step){
        this.title=title;
        this.defaultValue=defaultValue;
        this.minValue=minValue;
        this.maxValue=maxValue;
        this.step=step;
    }
}
