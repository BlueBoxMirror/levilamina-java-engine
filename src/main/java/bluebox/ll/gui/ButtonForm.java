package bluebox.ll.gui;

import bluebox.ll.entity.Player;

import java.util.LinkedList;
import java.util.function.Consumer;

public class ButtonForm extends Form{
    public ButtonForm() {
        this.title="";
        this.content="";
    }
    public ButtonForm(String title, String content) {
        this.title=title;
        this.content=content;
    }
    public String title;
    public String content;
    public Consumer<ButtonEvent> defaultCallback =(e)->{};
    protected final LinkedList<Button> buttons=new LinkedList<>();
    public void addButton(Button button) {
        buttons.add(button);
    }
    public void addButton(String text, String image, Button.ImageType type, Consumer<Player> action){
        Button button=new Button(text, image, type, action);
        addButton(button);
    }
    public void addButton(String text, Consumer<Player> action){
        Button button=new Button(text, "", Button.ImageType.PATH , action);
        addButton(button);
    }
    @Override
    public void send(Player player,Consumer<ButtonEvent> callback){
        send(player.getNativePointer(),title,content,buttons,callback);
    }
    @Override
    public void send(Player player){
        send(player, defaultCallback);
    }
    private static native void send(long playerPtr,String title,String content,LinkedList<Button> buttons,Consumer<ButtonEvent> callback);
}
