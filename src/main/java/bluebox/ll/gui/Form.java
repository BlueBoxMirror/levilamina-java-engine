package bluebox.ll.gui;

import bluebox.ll.world.entity.Player;

import java.util.function.Consumer;

abstract public class Form<T> {
    abstract public void sendTo(Player player, Consumer<FormEvent<T>> callback);
}
