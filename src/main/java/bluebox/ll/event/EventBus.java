package bluebox.ll.event;

import java.util.*;

public class EventBus{
    private static final HashMap<String, LinkedList<EventListener<?>>> listeners = new HashMap<>();

    public static <T extends Event> void emplaceListener(Class<T> eventType, EventListener<T> listener){
        listeners.putIfAbsent(eventType.getName(), new LinkedList<>());
        listeners.get(eventType.getName()).add(listener);
    }

    public static void publish(Event event){
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
