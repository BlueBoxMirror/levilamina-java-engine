package bluebox.ll.item;

import bluebox.ll.memory.PointerSupporter;

public class ItemStack implements PointerSupporter {
    protected ItemStack(long ptr){
        this.nativePtr = ptr;
    }
    private long nativePtr;

    public native String getCustomName();
    public native String getRawName();
    public native String getName();
    public native void setCustomName(String name);
    public native int getCount();
    public native void setCount(int count);
    public native String getTypeName();

    @Override
    public long getNativePointer() {
        return nativePtr;
    }
}
