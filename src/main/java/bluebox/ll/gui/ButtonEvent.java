package bluebox.ll.gui;

import bluebox.ll.entity.Player;

public class ButtonEvent {
    public ButtonEvent(Player player,int buttonId){
        this.player = player;
        this.buttonId = buttonId;
    }
    public final Player player;
    public final int buttonId;
}
