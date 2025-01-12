package bluebox.ll.event;

public class EventHandler<T extends Event> {
    public EventHandler(Class<T> type, EventListener<T> listener){
        this.type = type;
        this.listener = listener;
    }
    public final EventListener<T> listener;
    public final Class<T> type;
    private boolean enabled = true;
    public boolean isEnabled(){
        return enabled;
    }
    public void disable(){
        if(!enabled) return;
        EventBus.unregister(this);
        enabled = false;
    }
    public void enable(){
        if(enabled) return;
        EventBus.register(this);
        enabled = true;
    }
}
