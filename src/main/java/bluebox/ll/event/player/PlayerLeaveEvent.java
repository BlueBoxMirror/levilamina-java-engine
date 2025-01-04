package bluebox.ll.event.player;

import bluebox.ll.entity.Player;

public class PlayerLeaveEvent extends PlayerEvent{
    public PlayerLeaveEvent(Player player) {
        super(player);
    }
}
