package bluebox.ll.event.player;

import bluebox.ll.world.entity.Player;

/**
 * 玩家退出游戏事件
 */
public class PlayerLeaveEvent extends PlayerEvent{
    public PlayerLeaveEvent(Player player) {
        super(player);
    }
}
