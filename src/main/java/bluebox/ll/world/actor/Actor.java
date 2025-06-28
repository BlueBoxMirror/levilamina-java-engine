package bluebox.ll.world.actor;

import bluebox.ll.util.memory.PointerSupporter;

public class Actor implements PointerSupporter {
    protected Actor(long nativePtr){
        this.nativePtr = nativePtr;
    }
    protected final long nativePtr;
    @Override
    public long getNativePointer() {
        return nativePtr;
    }
    public native void kill();
}
