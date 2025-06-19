package bluebox.ll.gui;

import bluebox.ll.world.entity.Player;

public class FormEvent<T> {
    public enum CancelReason{
        Closed,
        Busy
    }
    final public T data;
    final public CancelReason cancelReason;
    final public Player player;
    public FormEvent(Player player,T data){
        this.player = player;
        this.data = data;
        this.cancelReason = null;
    }
    public FormEvent(Player player,CancelReason cancelReason){
        this.player = player;
        this.data = null;
        this.cancelReason = cancelReason;
    }
}
