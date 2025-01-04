package bluebox.ll.util.nbt;


import java.util.*;
import java.util.function.BiConsumer;
import java.util.function.BiFunction;
import java.util.function.Function;

public class TagCompound implements Tag,Map<String, Tag>,Cloneable {
    private final HashMap<String, Tag> map=new HashMap<>();

    public native byte[] toBinary();
    public static native TagCompound parse(byte[] bytes);

    @Override
    public int getId() {
        return COMPOUND;
    }
    @Override
    public String getIdName(){
        return "Compound";
    }

    @Override
    public String toString() {
        if(map.isEmpty()) return "{}";
        StringBuilder builder=new StringBuilder();
        builder.append('{');
        for(Map.Entry<String, Tag> entry:map.entrySet()) {
            builder.append('"').append(entry.getKey()).append("\": ").append(entry.getValue());
            builder.append(", ");
        }
        builder.setLength(builder.length()-2);
        builder.append('}');
        return builder.toString();
    }

    @Override
    public Object clone() {
        return map.clone();
    }

    @Override
    public void replaceAll(BiFunction<? super String, ? super Tag, ? extends Tag> function) {
        map.replaceAll(function);
    }

    @Override
    public void forEach(BiConsumer<? super String, ? super Tag> action) {
        map.forEach(action);
    }

    @Override
    public Tag merge(String key, Tag value, BiFunction<? super Tag, ? super Tag, ? extends Tag> remappingFunction) {
        return map.merge(key, value, remappingFunction);
    }

    @Override
    public Tag compute(String key, BiFunction<? super String, ? super Tag, ? extends Tag> remappingFunction) {
        return map.compute(key, remappingFunction);
    }

    @Override
    public Tag computeIfPresent(String key, BiFunction<? super String, ? super Tag, ? extends Tag> remappingFunction) {
        return map.computeIfPresent(key, remappingFunction);
    }

    @Override
    public Tag computeIfAbsent(String key, Function<? super String, ? extends Tag> mappingFunction) {
        return map.computeIfAbsent(key, mappingFunction);
    }

    @Override
    public Tag replace(String key, Tag value) {
        return map.replace(key, value);
    }

    @Override
    public boolean replace(String key, Tag oldValue, Tag newValue) {
        return map.replace(key, oldValue, newValue);
    }

    @Override
    public boolean remove(Object key, Object value) {
        return map.remove(key, value);
    }

    @Override
    public Tag putIfAbsent(String key, Tag value) {
        return map.putIfAbsent(key, value);
    }

    @Override
    public Tag getOrDefault(Object key, Tag defaultValue) {
        return map.getOrDefault(key, defaultValue);
    }

    @Override
    public Set<Entry<String, Tag>> entrySet() {
        return map.entrySet();
    }

    @Override
    public Collection<Tag> values() {
        return map.values();
    }

    @Override
    public Set<String> keySet() {
        return map.keySet();
    }

    @Override
    public boolean containsValue(Object value) {
        return map.containsValue(value);
    }

    @Override
    public void clear() {
        map.clear();
    }

    @Override
    public Tag remove(Object key) {
        return map.remove(key);
    }

    @Override
    public void putAll(Map<? extends String, ? extends Tag> m) {
        map.putAll(m);
    }

    @Override
    public Tag put(String key, Tag value) {
        return map.put(key, value);
    }

    @Override
    public boolean containsKey(Object key) {
        return map.containsKey(key);
    }

    @Override
    public Tag get(Object key) {
        return map.get(key);
    }

    @Override
    public boolean isEmpty() {
        return map.isEmpty();
    }

    @Override
    public int size() {
        return map.size();
    }
}
