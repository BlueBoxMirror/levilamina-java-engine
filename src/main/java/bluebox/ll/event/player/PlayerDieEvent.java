package bluebox.ll.event.player;

import bluebox.ll.world.entity.Entity;
import bluebox.ll.world.entity.Player;

public class PlayerDieEvent extends PlayerEvent {
    public PlayerDieEvent(Player player, Entity source) {
        super(player);
        this.source = source;
    }
    public final Entity source;
}
