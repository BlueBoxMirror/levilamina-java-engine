package bluebox.ll.event.player;

import bluebox.ll.world.entity.Player;
import bluebox.ll.event.Event;

public class PlayerEvent extends Event {
    public PlayerEvent(Player player){
        this.player = player;
    }

    /**
     * 事件发生时，对应的玩家对象
     */
    public final Player player;
}
