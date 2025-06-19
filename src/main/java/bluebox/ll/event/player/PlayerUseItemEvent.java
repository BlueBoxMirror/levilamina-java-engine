package bluebox.ll.event.player;

import bluebox.ll.event.Cancellable;
import bluebox.ll.world.entity.Player;
import bluebox.ll.world.item.ItemStack;

public class PlayerUseItemEvent extends PlayerEvent implements Cancellable {
    public PlayerUseItemEvent(Player player,ItemStack item) {
        super(player);
        this.item = item;
    }
    public final ItemStack item;
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
