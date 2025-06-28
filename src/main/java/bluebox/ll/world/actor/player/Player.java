package bluebox.ll.world.actor.player;

import bluebox.ll.world.actor.Actor;

public class Player extends Actor {
    protected Player(long nativePtr) {
        super(nativePtr);
    }
    public native String getRealName();
}
