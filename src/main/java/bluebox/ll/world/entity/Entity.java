package bluebox.ll.world.entity;

import bluebox.ll.util.memory.PointerSupporter;
import bluebox.ll.util.Angle;
import bluebox.ll.util.Location;
import bluebox.ll.util.Vector;
import bluebox.ll.util.nbt.TagCompound;
import bluebox.ll.world.container.Container;
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

    public native void teleport(double x,double y,double z,int dimensionId,double yaw,double pitch);
    public native void teleport(double x,double y,double z,int dimensionId);
    public void teleport(double x,double y,double z){
        teleport(x,y,z,getDimensionId());
    }
    public void teleport(int x,int y,int z,int dimensionId,double yaw,double pitch){
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
    public native void updateItems();


    @Override
    public long getNativePointer() {
        return nativePtr;
    }
}
