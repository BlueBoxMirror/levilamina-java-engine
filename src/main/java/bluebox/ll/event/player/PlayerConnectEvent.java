package bluebox.ll.event.player;

import bluebox.ll.world.entity.Player;
import bluebox.ll.event.Cancellable;


/**
 * 玩家连接服务器事件
 */
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
