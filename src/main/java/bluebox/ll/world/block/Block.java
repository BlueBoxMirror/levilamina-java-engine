package bluebox.ll.world.block;

import bluebox.ll.util.Location;
import bluebox.ll.util.memory.PointerSupporter;
import bluebox.ll.util.nbt.TagCompound;
import bluebox.ll.util.nbt.TagString;
import bluebox.ll.world.container.Container;

public class Block implements PointerSupporter {
    protected Block(long nativePtr,int x,int y,int z,int dimid){
        this.nativePtr=nativePtr;
        this.location=new Location(x,y,z,dimid);
    }
    private final Location location;

    public static native Block getBlock(int x,int y,int z,int dimid);
    public static Block getBlock(Location location){
        return getBlock(location.getBlockX(),location.getBlockY(),location.getBlockZ(),location.getDimId());
    }
    public static native void setBlock(int x,int y,int z,int dimid,TagCompound blockNbt);
    public static void setBlock(int x,int y,int z,int dimid,String blockTypeName,int tileData){
        //TODO
    }
    public static void setBlock(int x,int y,int z,int dimid,String blockTypeName){
        setBlock(x,y,z,dimid,blockTypeName,0);
    }
    public static void setBlock(Location location,TagCompound blockNbt){
        setBlock(location.getBlockX(),location.getBlockY(),location.getBlockZ(),location.getDimId(),blockNbt);
    }
    public static void setBlock(Location location,String blockName,int tileData){
        setBlock(location.getBlockX(),location.getBlockY(),location.getBlockZ(),location.getDimId(),blockName,tileData);
    }
    public static void setBlock(Location location,String blockName){
        setBlock(location,blockName,0);
    }
    public native String getName();
    public native String getTypeName();
    public native int getId();
    public Location getLocation(){
        return location.clone();
    }
    public native int getTileData();
    public native int getVariant();
    public native int getTranslucency();
    public native int getThickness();
    public native boolean isAir();
    public native boolean isBounceBlock();
    public native boolean isButtonBlock();
    public native boolean isCropBlock();
    public native boolean isDoorBlock();
    public native boolean isFenceBlock();
    public native boolean isFenceGateBlock();
    public native boolean isThinFenceBlock();
    public native boolean isHeavyBlock();
    public native boolean isStemBlock();
    public native boolean isSlabBlock();
    public native boolean isUnbreakable();
    public native boolean isWaterBlockingBlock();
    public native void destroy(boolean drop);
    public native TagCompound getNbt();
    public native void setNbt(TagCompound nbt);
    //getBlockState
    public native boolean hasContainer();
    public native Container getContainer();
    public native boolean hasBlockEntity();
    public native BlockEntity getBlockEntity();
    public native void removeBlockEntity();

    private final long nativePtr;
    @Override
    public long getNativePointer() {
        return nativePtr;
    }
}
