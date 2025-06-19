package bluebox.ll.world.container;

import bluebox.ll.util.memory.PointerSupporter;
import bluebox.ll.world.item.ItemStack;

import java.util.ArrayList;

public class Container implements PointerSupporter{
    private Container(long nativePtr) {
        this.nativePtr = nativePtr;
    }
    public native boolean add(ItemStack itemStack);
    public void remove(int index){
        remove(index,64);
    }
    public native void remove(int index, int count);
    public native int size();
    public native boolean isEmpty();
    public native void clear();
    public native ArrayList<ItemStack> getItems();
    public native ItemStack get(int index);
    public native void set(int index, ItemStack itemStack);
    public native boolean hasRoomFor(ItemStack itemStack);
    public native boolean addItemToFirstEmptySlot(ItemStack itemStack);

    private final long nativePtr;
    @Override
    public long getNativePointer() {
        return nativePtr;
    }
}
