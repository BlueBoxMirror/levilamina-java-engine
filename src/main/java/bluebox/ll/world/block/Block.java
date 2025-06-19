package bluebox.ll.world.block;

import bluebox.ll.util.Location;
import bluebox.ll.util.memory.PointerSupporter;
import bluebox.ll.util.nbt.TagCompound;
import bluebox.ll.world.container.Container;

public class Block implements PointerSupporter {
    private Block(long nativePtr, double x, double y, double z, int dimensionId){
        this.nativePtr = nativePtr;
        this.location = new Location(x,y,z,dimensionId);
    }
    private final Location location;

    public native String getType();
    public Location getLocation(){
        return location;
    }
    public native TagCompound getNBT();
    public void setNBT(TagCompound nbt){
        this.nativePtr=setBlock(location, nbt).nativePtr;
    }
    public native boolean hasContainer();
    public native boolean hasBlockEntity();
    public native Container getContainer();
    public native BlockEntity getBlockEntity();
    public Block cloneTo(Location location){
        Block result = setBlock(location, getNBT());
        if(this.hasBlockEntity()) result.getBlockEntity().setNbt(this.getBlockEntity().getNbt());
        if(this.hasContainer()) this.getContainer().getItems().forEach(item ->{
            result.getContainer().add(item.clone());
        });
        return result;
    }
    public Block cloneTo(int x,int y,int z,int dimensionId){
        return cloneTo(new Location(x,y,z,dimensionId));
    }
    private long nativePtr;
    @Override
    public long getNativePointer() {
        return nativePtr;
    }
    public static Block setBlock(Location location, TagCompound nbt){
        return setBlock(location.vector.getX(),location.vector.getY(),location.vector.getZ(),location.dimensionId,nbt);
    }
    public static native Block setBlock(double x,double y,double z,int dimensionId, TagCompound nbt);
}
