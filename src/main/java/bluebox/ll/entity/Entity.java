package bluebox.ll.entity;

import bluebox.ll.memory.PointerSupporter;
import bluebox.ll.util.Angle;
import bluebox.ll.util.Location;
import bluebox.ll.util.Vector;
import bluebox.ll.util.nbt.TagCompound;
import org.jetbrains.annotations.NotNull;

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

    public native String getType();
    public native long getUniqueId();
    public native String getName();
    public native String getNameTag();
    public native void setNameTag(String nameTag);
    public native TagCompound getNbt();
    public native void setNbt(TagCompound nbt);
    public native Location getLocation();
    public native void kill();
    public native Location getFeetLocation();
    public native int getDimensionId();

    public native void teleport(float x,float y,float z,int dimensionId,float yaw,float pitch);
    public native void teleport(float x,float y,float z,int dimensionId);
    public void teleport(float x,float y,float z){
        teleport(x,y,z,getDimensionId());
    }
    public void teleport(int x,int y,int z,int dimensionId,float yaw,float pitch){
        this.teleport(new Location(x,y,z,dimensionId),new Angle(yaw,pitch));
    }
    public void teleport(int x,int y,int z,int dimensionId){
        this.teleport(new Location(x,y,z,dimensionId));
    }
    public void teleport(int x,int y,int z){
        teleport(new Location(x,y,z,this.getDimensionId()));
    }
    public void teleport(@NotNull Location pos,@NotNull Angle angle){
        teleport(pos.vector.getX(),pos.vector.getY(),pos.vector.getZ(),pos.dimensionId,angle.getYaw(),angle.getPitch());
    }
    public void teleport(@NotNull Vector pos,@NotNull Angle angle){
        teleport(pos.getX(),pos.getY(),pos.getZ(),this.getDimensionId(),angle.getYaw(),angle.getPitch());
    }
    public void teleport(@NotNull Location pos){
        teleport(pos.vector.getX(),pos.vector.getY(),pos.vector.getZ(),pos.dimensionId);
    }
    public void teleport(@NotNull Vector pos){
        teleport(pos.getX(),pos.getY(),pos.getZ(),this.getDimensionId());
    }



    @Override
    public long getNativePointer() {
        return nativePtr;
    }
}
