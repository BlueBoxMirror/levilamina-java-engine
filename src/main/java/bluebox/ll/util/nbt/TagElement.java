package bluebox.ll.util.nbt;

public interface TagElement<T> extends Tag, Cloneable {
    T get();
    void set(T value);
}
