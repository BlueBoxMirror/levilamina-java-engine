package bluebox.ll.world.container;

import bluebox.ll.util.memory.PointerSupporter;

public class Container implements PointerSupporter {
    @Override
    public long getNativePointer() {
        return nativePtr;
    }
    protected Container(long nativePtr){
        this.nativePtr=nativePtr;
    }
    private final long nativePtr;
    public native int size();
    public native String getTypeName();
    public native boolean isEmpty();
}
