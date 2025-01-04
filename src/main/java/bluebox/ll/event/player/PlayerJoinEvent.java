package bluebox.ll.event.player;

import bluebox.ll.entity.Player;
import bluebox.ll.event.Cancellable;

public class PlayerJoinEvent extends PlayerEvent implements Cancellable {
    public PlayerJoinEvent(Player player) {
        super(player);
    }
    private boolean cancelled = false;

    @Override
    public boolean isCancelled() {
        return cancelled;
    }

    @Override
    public void cancel() {
        cancelled = true;
    }
}
