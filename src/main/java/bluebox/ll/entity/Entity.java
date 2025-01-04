package bluebox.ll.entity;

import bluebox.ll.memory.PointerSupporter;
import bluebox.ll.util.nbt.TagCompound;

public class Entity implements Comparable<Entity>, PointerSupporter {
    protected Entity(long nativePtr){
        this.nativePtr = nativePtr;
    }
    protected long nativePtr;
    @Override
    public boolean equals(Object obj) {
        if (obj instanceof Entity)
            return ((Entity) obj).nativePtr == nativePtr;
        else return false;
    }
    @Override
    public int hashCode() {
        return Long.hashCode(nativePtr);
    }
    @Override
    public int compareTo(Entity o) {
        return Long.compare(nativePtr, o.nativePtr);
    }

    public native String getName();
    public native void setName(String name);
    public native TagCompound getNbt();
    public native void setNbt(TagCompound nbt);

    @Override
    public long getNativePointer() {
        return nativePtr;
    }
}
