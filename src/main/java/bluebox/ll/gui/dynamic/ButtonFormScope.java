package bluebox.ll.gui.dynamic;

import bluebox.ll.gui.Button;
import bluebox.ll.gui.FormEvent;
import org.jetbrains.annotations.NotNull;
import org.jetbrains.annotations.Nullable;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.function.Consumer;

public class ButtonFormScope<T> extends FormScope<T>{
    protected ButtonFormScope(FormRuntime runtime, T parameter) {
        super(runtime, parameter);
    }
    @NotNull public String title="";
    @NotNull public String content="";
    @NotNull public Consumer<DynamicFormEvent<Integer>> onConfirm = (event) -> {};
    @NotNull public Consumer<DynamicFormEvent<FormEvent.CancelReason>> onExit = (event) -> {};
    protected final LinkedList<Button> buttons = new LinkedList<>();
    protected final ArrayList<Consumer<DynamicFormEvent<Integer>>> onClicks = new ArrayList<>();
    public void addButton(@NotNull Button button,@Nullable Consumer<DynamicFormEvent<Integer>> onClick) {
        buttons.add(button);
        onClicks.add(onClick);
    }
    public void addButton(@NotNull String text,@Nullable Consumer<DynamicFormEvent<Integer>> onClick){
        buttons.add(new Button(text));
        onClicks.add(onClick);
    }
    public void addButton(@NotNull String text, @Nullable String imagePath,@Nullable Consumer<DynamicFormEvent<Integer>> onClick){
        buttons.add(new Button(text, imagePath, Button.ImageType.path));
        onClicks.add(onClick);
    }
    public void addButton(@NotNull String text, @Nullable String imagePath, @NotNull Button.ImageType imageType,@Nullable Consumer<DynamicFormEvent<Integer>> onClick){
        buttons.add(new Button(text, imagePath, imageType));
        onClicks.add(onClick);
    }
}
