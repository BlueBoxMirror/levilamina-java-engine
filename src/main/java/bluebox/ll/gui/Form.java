package bluebox.ll.gui;

import bluebox.ll.entity.Player;

import java.util.function.Consumer;

abstract public class Form {
    public abstract void send(Player player, Consumer<ButtonEvent> callback);
    public abstract void send(Player player);
}
