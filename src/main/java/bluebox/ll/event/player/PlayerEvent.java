package bluebox.ll.event.player;

import bluebox.ll.entity.Player;
import bluebox.ll.event.Event;

public class PlayerEvent extends Event {
    public PlayerEvent(Player player){
        this.player = player;
    }
    public final Player player;
}
