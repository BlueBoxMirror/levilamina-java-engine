package bluebox.ll.gui;

import bluebox.ll.world.entity.Player;
import org.jetbrains.annotations.NotNull;

import java.util.function.Consumer;

public class ModalForm extends Form<Boolean>{
    @Override
    public native void sendTo(Player player, Consumer<FormEvent<Boolean>> callback);

    @NotNull public String title="";
    @NotNull public String content="";
    @NotNull public String confirmButtonText="确定";
    @NotNull public String cancelButtonText="取消";

    public ModalForm(){}
    public ModalForm(@NotNull String title, @NotNull String content, @NotNull String confirmButtonText, @NotNull String cancelButtonText){
        this.title=title;
        this.content=content;
        this.confirmButtonText=confirmButtonText;
        this.cancelButtonText=cancelButtonText;
    }
    public ModalForm(@NotNull String title, @NotNull String content){
        this.title=title;
        this.content=content;
    }
}
