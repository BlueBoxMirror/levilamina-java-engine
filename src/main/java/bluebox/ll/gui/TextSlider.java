package bluebox.ll.gui;

import org.jetbrains.annotations.NotNull;

import java.util.ArrayList;

public class TextSlider extends CustomElement{
    @Override
    protected native void draw(long formPtr,int index);

    @Override
    protected int getId() {
        return TEXT_SLIDER;
    }

    @NotNull public String title="";
    public final ArrayList<String> options;
    public TextSlider(@NotNull String title,@NotNull ArrayList<String> options,int defaultIndex) {
        this.title = title;
        this.options = options;
        this.defaultIndex=defaultIndex;
    }
    public TextSlider(@NotNull String title,@NotNull ArrayList<String> options,String defaultOption) {
        this.title = title;
        this.options = options;
        this.defaultIndex=options.indexOf(defaultOption);
    }
    public TextSlider(@NotNull String title, @NotNull ArrayList<String> options) {
        this.title = title;
        this.options = options;
    }
    public TextSlider(@NotNull String title) {
        this.title = title;
        this.options = new ArrayList<>();
    }
    public TextSlider() {
        this.options = new ArrayList<>();
    }
    public void addOption(@NotNull String option) {
        options.add(option);
    }
    public int defaultIndex = 0;
    public void setDefaultOption(String option){
        defaultIndex = options.indexOf(option);
    }
}
