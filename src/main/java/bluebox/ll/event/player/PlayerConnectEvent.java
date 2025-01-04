package bluebox.ll.event.player;

import bluebox.ll.entity.Player;
import bluebox.ll.event.Cancellable;

public class PlayerConnectEvent extends PlayerEvent implements Cancellable {
    public PlayerConnectEvent(Player player) {
        super(player);
    }
    private boolean cancelled = false;
    @Override
    public boolean isCancelled() {
        return cancelled;
    }
    @Override
    public void cancel() {
        this.cancelled = true;
    }
}
