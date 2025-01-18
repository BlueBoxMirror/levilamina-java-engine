package bluebox.ll.gui;

import bluebox.ll.entity.Player;

import java.util.LinkedList;
import java.util.function.Consumer;

public class CustomForm extends Form{
    public CustomForm(String title){
        this.title = title;
    }
    public String title;
    private final LinkedList<CustomElement> elements = new LinkedList<>();
    public Consumer<ButtonEvent> defaultCallback=(e)->{};
    public void add(CustomElement element){
        elements.add(element);
    }
    public void addLabel(String text){
        elements.add(new Label(text));
    }

    @Override
    public void send(Player player, Consumer<ButtonEvent> callback) {
         send(player.getNativePointer(),title,elements,callback);
    }
    @Override
    public void send(Player player) {
        send(player, defaultCallback);
    }
    private static native void send(long playerPtr,String title,LinkedList<CustomElement> elements,Consumer<ButtonEvent> callback);
}
