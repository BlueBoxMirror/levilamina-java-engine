package bluebox.ll.gui;

import bluebox.ll.world.entity.Player;
import org.jetbrains.annotations.NotNull;
import org.jetbrains.annotations.Nullable;

import java.util.LinkedList;
import java.util.function.Consumer;

public class ButtonForm extends Form<Integer>{
    @Override
    public native void sendTo(Player player, Consumer<FormEvent<Integer>> callback);
    @NotNull public String title="";
    @NotNull public String content="";
    protected final LinkedList<Button> buttons=new LinkedList<>();
    public ButtonForm() {}
    public ButtonForm(@NotNull String title, @NotNull String content) {
        this.title = title;
        this.content = content;
    }
    public void addButton(Button button) {
        buttons.add(button);
    }
    public void addButton(@NotNull String text){
        buttons.add(new Button(text));
    }
    public void addButton(@NotNull String text, @Nullable String imagePath, @NotNull Button.ImageType imageType){
        buttons.add(new Button(text, imagePath, imageType));
    }
}
