package bluebox.ll.event;

import org.jetbrains.annotations.NotNull;

import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.util.*;

public class EventBus{
    private static final HashMap<String, LinkedList<EventListener<?>>> listenerMap = new HashMap<>();
    private static LinkedList<EventListener<Event>> rootListeners = null;

    public static <T extends Event> @NotNull EventHandler<T> emplaceListener(Class<T> eventType, EventListener<T> listener){
        EventHandler<T> handler = new EventHandler<>(eventType, listener);
        register(handler);
        return handler;
    }

    protected static <T extends Event> void register(@NotNull EventHandler<T> handler){
        listenerMap.putIfAbsent(handler.type.getName(), new LinkedList<>());
        var listeners=EventBus.listenerMap.get(handler.type.getName());
        listeners.add(handler.listener);
        if(handler.type==Event.class){
            EventBus.rootListeners= (LinkedList<EventListener<Event>>) handler.listener;
        }
    }
    protected static <T extends Event> void unregister(@NotNull EventHandler<T> handler){
        listenerMap.get(handler.type.getName()).remove(handler.listener);
    }

    public static void publish(@NotNull NativeEvent event){
        event.publishInNative();
        LinkedList<EventListener<?>> listeners = EventBus.listenerMap.get(event.getClass().getName());
        if(listeners!=null){
            for(EventListener listener: listeners){
                listener.onEvent(event);
            }
        }
        if(rootListeners!=null){
            for(EventListener<Event> listener: rootListeners){
                listener.onEvent(event);
            }
        }
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
            LinkedList<EventListener<?>> listeners = EventBus.listenerMap.get(name);
            if(listeners!=null){
                for(EventListener listener: listeners){
                    listener.onEvent(event);
                }
            }
        }
    }
}
