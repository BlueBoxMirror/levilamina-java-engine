package bluebox.ll.event.player;

import bluebox.ll.world.entity.Player;
import bluebox.ll.event.Cancellable;

/**
 * 玩家加入游戏事件
 */
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
