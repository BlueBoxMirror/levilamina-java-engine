package bluebox.ll.world.block;

import bluebox.ll.util.Location;
import bluebox.ll.util.memory.PointerSupporter;
import bluebox.ll.util.nbt.TagCompound;

public class BlockEntity implements PointerSupporter {
    protected BlockEntity(long nativePtr){
        this.nativePtr=nativePtr;
    }
    private final long nativePtr;
    @Override
    public long getNativePointer() {
        return nativePtr;
    }
    public native String getName();
    public native Location getLocation();
    public native int getType();
    public native TagCompound getNbt();
    public native void setNbt(TagCompound nbt);
    public native Block getBlock();
}
