package bluebox.ll.gui;

import bluebox.ll.world.entity.Player;
import org.jetbrains.annotations.NotNull;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.function.Consumer;

public class CustomForm extends Form<ArrayList<Object>>{
    @Override
    public native void sendTo(Player player, Consumer<FormEvent<ArrayList<Object>>> callback);
    @NotNull public String title="";
    protected final LinkedList<CustomElement> elements = new LinkedList<>();
    public CustomForm() {}
    public CustomForm(@NotNull String title) {
        this.title = title;
    }
    public void add(CustomElement element) {
        elements.add(element);
    }
    public void addLabel(@NotNull String text){
        add(new Label(text));
    }

    public void addInput(@NotNull String title){
        addInput(title,"","");
    }
    public void addInput(@NotNull String title, @NotNull String defaultValue){
        addInput(title,defaultValue,"");
    }
    public void addInput(@NotNull String title, @NotNull String defaultValue, @NotNull String placeholder){
        add(new Input(title,defaultValue,placeholder));
    }

    public void addDropdown(@NotNull String title,@NotNull ArrayList<String> options){
        add(new DropDown(title,options));
    }
    public void addDropdown(@NotNull String title, @NotNull String[] options){
        addDropdown(title,new ArrayList<>(List.of(options)));
    }
    public void addDropdown(@NotNull String title, @NotNull ArrayList<String> options, int defaultIndex){
        add(new DropDown(title,options,defaultIndex));
    }
    public void addDropdown(@NotNull String title, @NotNull String[] options, int defaultIndex){
        addDropdown(title,new ArrayList<>(List.of(options)),defaultIndex);
    }

    public void addToggle(@NotNull String title, boolean defaultValue){
        add(new Toggle(title,defaultValue));
    }
    public void addToggle(@NotNull String title){
        addToggle(title,false);
    }

    public void addSlider(@NotNull String title, double min, double max, double step, double defaultValue){
        add(new Slider(title,min,max,step,defaultValue));
    }
    public void addSlider(@NotNull String title, double min, double max){
        addSlider(title,min,max,1,min);
    }
    public void addSlider(@NotNull String title, double min, double max, double step){
        addSlider(title,min,max,step,min);
    }

    public void addTextSlider(@NotNull String title,@NotNull ArrayList<String> options){
        add(new TextSlider(title,options));
    }
    public void addTextSlider(@NotNull String title, @NotNull String[] options){
        addTextSlider(title,new ArrayList<>(List.of(options)));
    }
    public void addTextSlider(@NotNull String title, @NotNull ArrayList<String> options, int defaultIndex){
        add(new TextSlider(title,options,defaultIndex));
    }
    public void addTextSlider(@NotNull String title, @NotNull String[] options, int defaultIndex){
        addTextSlider(title,new ArrayList<>(List.of(options)),defaultIndex);
    }

}
