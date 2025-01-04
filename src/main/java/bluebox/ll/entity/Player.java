package bluebox.ll.entity;

import bluebox.ll.Logger;

public class Player extends Entity {
    protected Player(long ptr) {
        super(ptr);
    }
    public native String getRealName();
    public native void sendChat(String message);
}
