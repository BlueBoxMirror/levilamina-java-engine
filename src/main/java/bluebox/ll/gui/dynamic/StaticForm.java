package bluebox.ll.gui.dynamic;

import bluebox.ll.gui.Form;
import bluebox.ll.gui.FormEvent;
import bluebox.ll.gui.ModalForm;
import bluebox.ll.world.entity.Player;

import java.util.function.Consumer;

public class StaticForm<T> {
    private final Form<T> form;
    private final Player player;

    public StaticForm(Form<T> form, Player player, Consumer<FormEvent<T>> callback) {
        this.form = form;
        this.callback = callback;
        this.player = player;
    }
    private final Consumer<FormEvent<T>> callback;
    public void send(){
        form.sendTo(player,callback);
    }
}
