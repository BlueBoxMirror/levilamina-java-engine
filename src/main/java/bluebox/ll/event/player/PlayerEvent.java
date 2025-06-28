package bluebox.ll.event.player;

import bluebox.ll.event.NativeEvent;
import bluebox.ll.world.actor.player.Player;

public class PlayerEvent extends NativeEvent {
    public PlayerEvent(Player player) {
        this.player = player;
    }
    private final Player player;
    public Player getPlayer() {
        return player;
    }
    private static native void registerInNative();
    static {
        registerInNative();
    }
}
