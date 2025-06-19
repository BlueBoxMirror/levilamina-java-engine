package bluebox.ll.event;

import org.jetbrains.annotations.NotNull;

import java.util.*;

public class EventBus{
    private static final HashMap<String, LinkedList<EventListener<?>>> listeners = new HashMap<>();

    public static <T extends Event> @NotNull EventHandler<T> emplaceListener(Class<T> eventType, EventListener<T> listener){
        EventHandler<T> handler = new EventHandler<>(eventType, listener);
        register(handler);
        return handler;
    }

    protected static <T extends Event> void register(@NotNull EventHandler<T> handler){
        listeners.putIfAbsent(handler.type.getName(), new LinkedList<>());
        listeners.get(handler.type.getName()).add(handler.listener);
    }
    protected static <T extends Event> void unregister(@NotNull EventHandler<T> handler){
        listeners.get(handler.type.getName()).remove(handler.listener);
    }

    public static void publish(@NotNull Event event){
        Queue<String> queue = new LinkedList<>();
        Class eventType = event.getClass();
        queue.offer(eventType.getName());
        while(eventType.getSuperclass()!=Event.class){
            eventType = eventType.getSuperclass();
            queue.offer(eventType.getName());
        }
        queue.offer(Event.class.getName());
        while(!queue.isEmpty()){
            String name = queue.poll();
            LinkedList<EventListener<?>> listeners = EventBus.listeners.get(name);
            if(listeners!=null){
                for(EventListener listener: listeners){
                    listener.onEvent(event);
                }
            }
        }
    }
}
