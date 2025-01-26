package bluebox.ll.event.player;

import bluebox.ll.world.entity.Entity;
import bluebox.ll.world.entity.Player;
import bluebox.ll.event.Cancellable;

public class PlayerAttackEvent extends PlayerEvent implements Cancellable {
    public PlayerAttackEvent(Player player, Entity target,int cause) {
        super(player);
        this.target = target;
        this.cause = cause;
    }
    public final Entity target;
    private boolean cancelled = false;
    public final int cause;
    @Override
    public boolean isCancelled() {
        return cancelled;
    }

    @Override
    public void cancel() {
        cancelled = true;
    }
}
