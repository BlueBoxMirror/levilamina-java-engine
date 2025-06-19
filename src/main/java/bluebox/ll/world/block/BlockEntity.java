package bluebox.ll.world.block;

import bluebox.ll.util.memory.PointerSupporter;
import bluebox.ll.util.nbt.TagCompound;

public class BlockEntity implements PointerSupporter {
    protected BlockEntity(long nativePtr) {
        this.nativePtr = nativePtr;
    }
    public native TagCompound getNbt();
    public native void setNbt(TagCompound nbt);
    private final long nativePtr;
    @Override
    public long getNativePointer() {
        return nativePtr;
    }
}
