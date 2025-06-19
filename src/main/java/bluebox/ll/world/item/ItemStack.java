package bluebox.ll.world.item;

import bluebox.ll.util.memory.PointerSupporter;
import bluebox.ll.util.memory.Releaser;
import bluebox.ll.util.nbt.*;
import org.jetbrains.annotations.NotNull;

public class ItemStack implements PointerSupporter,Cloneable {
    protected ItemStack(long ptr){
        this.nativePtr = ptr;
    }
    public ItemStack(@NotNull TagCompound nbt){
        initFormNBT(nbt);
        Releaser.register(this, this.nativePtr, ItemStack::deleteInNative);
    }
    public ItemStack(@NotNull String type, short count){
        this(new TagCompound(){{
            put("Name",new TagString(type));
            put("Count",new TagShort(count));
        }});
    }
    public ItemStack(){
        this("minecraft:air", (short)0);
    }
    private native void initFormNBT(TagCompound nbt);
    private long nativePtr;

    public native String getCustomName();
    public native String getName();
    public native void setCustomName(String name);
    public native int getCount();
    public native void setCount(int count);
    public native String getTypeName();
    public native void delete();
    public native boolean isEmpty();
    public void set(ItemStack newItem){
        this.setNbt(newItem.getNbt());
    }
    public native TagCompound getNbt();
    public native void setNbt(TagCompound nbt);
    @Override
    public ItemStack clone(){
        return new ItemStack(this.getNbt());
    }
    private static native void deleteInNative(long ptr);

    @Override
    public long getNativePointer() {
        return nativePtr;
    }
}
