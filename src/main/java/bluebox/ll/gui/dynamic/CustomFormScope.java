package bluebox.ll.gui.dynamic;

import bluebox.ll.gui.*;
import bluebox.ll.util.Result;
import bluebox.ll.world.entity.Player;
import org.jetbrains.annotations.NotNull;
import org.jetbrains.annotations.Nullable;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.function.Consumer;
import java.util.function.Function;
import java.util.stream.Stream;

public class CustomFormScope<T> extends FormScope<T> {
    protected CustomFormScope(FormRuntime runtime, T parameter) {
        super(runtime, parameter);
    }
    @NotNull public String title="";
    protected final ArrayList<DynamicCustomElement> elements = new ArrayList<>();
    protected final ArrayList<Object> results = new ArrayList<>();
    protected boolean isSubmitted = false;
    @NotNull public Consumer<DynamicFormEvent<ArrayList<Object>>> onSubmit = (event) -> {};
    @NotNull public Consumer<DynamicFormEvent<FormEvent.CancelReason>> onCancel = (event) -> {};
    public <T> Result<T> add(CustomElement element) {
        return add(new DynamicCustomElement(element));
    }
    public <T> Result<T> add(DynamicCustomElement element){
        final int index = elements.size();
        elements.add(element);
        return new Result<>(()->{
            if(isSubmitted) return Result.success((T) results.get(index));
            return Result.failed("form not submitted yet");
        });
    }
    public Result<String> addInput(@NotNull String title){
        return add(new Input(title,"",""));
    }
    public Result<String> addInput(@NotNull String title, @NotNull String defaultValue){
        return add(new Input(title,defaultValue,""));
    }
    public Result<String> addInput(@NotNull String title,@NotNull String defaultValue, @NotNull String placeholder){
        return add(new Input(title,defaultValue,placeholder));
    }

    public Result<String> addDropdown(@NotNull String title,@NotNull ArrayList<String> options){
        return add(new DropDown(title,options));
    }
    public Result<String> addDropdown(@NotNull String title, @NotNull String[] options){
        return addDropdown(title,new ArrayList<>(List.of(options)));
    }
    public Result<String> addDropdown(@NotNull String title, @NotNull ArrayList<String> options, int defaultIndex){
        return add(new DropDown(title,options,defaultIndex));
    }
    public Result<String> addDropdown(@NotNull String title, @NotNull String[] options, int defaultIndex){
        return addDropdown(title,new ArrayList<>(List.of(options)),defaultIndex);
    }

    public Result<Boolean> addToggle(@NotNull String title, boolean defaultValue){
        return add(new Toggle(title,defaultValue));
    }
    public Result<Boolean> addToggle(@NotNull String title){
        return addToggle(title,false);
    }

    public Result<Double> addSlider(@NotNull String title, double min, double max, double step, double defaultValue){
        return add(new Slider(title,min,max,step,defaultValue));
    }
    public Result<Double> addSlider(@NotNull String title, double min, double max){
        return addSlider(title,min,max,1,min);
    }
    public Result<Double> addSlider(@NotNull String title, double min, double max, double step){
        return addSlider(title,min,max,step,min);
    }

    public Result<String> addTextSlider(@NotNull String title,@NotNull ArrayList<String> options){
        return add(new TextSlider(title,options));
    }
    public Result<String> addTextSlider(@NotNull String title, @NotNull String[] options){
        return addTextSlider(title,new ArrayList<>(List.of(options)));
    }
    public Result<String> addTextSlider(@NotNull String title, @NotNull ArrayList<String> options, int defaultIndex){
        return add(new TextSlider(title,options,defaultIndex));
    }
    public Result<String> addTextSlider(@NotNull String title, @NotNull String[] options, int defaultIndex){
        return addTextSlider(title,new ArrayList<>(List.of(options)),defaultIndex);
    }

    public Result<String> addInput(@NotNull String title,@NotNull String defaultValue, @NotNull String placeholder, @NotNull Function<String,Boolean> condition,@NotNull String errorMessage){
        return add(new DynamicCustomElement(new Input(title,defaultValue,placeholder),(t)->{
            if(condition.apply((String)t)) return null;
            else return errorMessage;
        },(t)->t));
    }
    public Result<Integer> addIntInput(@NotNull String title, int defaultValue, @NotNull String placeholder, @NotNull Function<Integer,Boolean> condition,@NotNull String errorMessage){
        return add(new DynamicCustomElement(new Input(title,String.valueOf(defaultValue),placeholder),(t)->{
            try {
                int value = Integer.parseInt((String) t);
                if (condition.apply(value)) return null;
                else return errorMessage;
            } catch (NumberFormatException e) {
                return e.getMessage();
            }
        },(t)->Integer.valueOf((String)t)));
    }
    public Result<Integer> addIntInput(@NotNull String title,@NotNull Function<Integer,Boolean> condition,@NotNull String errorMessage){
        return addIntInput(title,0,"",condition,errorMessage);
    }
    public Result<Integer> addIntInput(@NotNull String title,int defaultValue,@NotNull String placeholder){
        return addIntInput(title,defaultValue,placeholder,(t)->true,"");
    }
    public Result<Integer> addIntInput(@NotNull String title){
        return addIntInput(title,0,"");
    }
    public Result<Double> addDoubleInput(@NotNull String title, double defaultValue, @NotNull String placeholder, @NotNull Function<Double,Boolean> condition,@NotNull String errorMessage){
        return add(new DynamicCustomElement(new Input(title,String.valueOf(defaultValue),placeholder),(t)->{
            try {
                double value = Double.parseDouble((String) t);
                if (condition.apply(value)) return null;
                else return errorMessage;
            } catch (NumberFormatException e) {
                return e.getMessage();
            }
        },(t)->Double.valueOf((String)t)));
    }
    public Result<Double> addDoubleInput(@NotNull String title,double defaultValue,@NotNull String placeholder){
        return addDoubleInput(title,defaultValue,placeholder,(t)->true,"");
    }
    public Result<Double> addDoubleInput(@NotNull String title,@NotNull Function<Double,Boolean> condition,@NotNull String errorMessage){
        return addDoubleInput(title,0.0,"",condition,errorMessage);
    }
    public Result<Double> addDoubleInput(@NotNull String title){
        return addDoubleInput(title,0.0,"");
    }

    public Result<Player> addPlayerDropdown(@NotNull String title, @Nullable Player defaultValue, @Nullable Function<Player,Boolean> condition){
        HashMap<String,Player> players=new HashMap<>();
        ArrayList<String> names=new ArrayList<>();
        Player.getOnline().forEach(player->{
            if(condition!=null && !condition.apply(player)) return;
            players.put(player.getRealName(),player);
            names.add(player.getRealName());
        });
        return add(
                new DynamicCustomElement(
                        new DropDown(
                                title,
                                names,
                                defaultValue==null?0:names.indexOf(defaultValue.getRealName())
                        ),
                        (t)->null,
                        (t)-> players.get((String)t)
                )
        );
    }
    public Result<Player> addPlayerDropdown(@NotNull String title, @Nullable Function<Player,Boolean> condition){
        return addPlayerDropdown(title,null,condition);
    }
    public Result<Player> addPlayerDropdown(@NotNull String title, @Nullable Player defaultValue){
        return addPlayerDropdown(title,defaultValue,null);
    }
    public Result<Player> addPlayerDropdown(@NotNull String title){
        return addPlayerDropdown(title,null,null);
    }

}
