package bluebox.ll.command;

import bluebox.ll.util.Angle;
import bluebox.ll.util.Location;
import bluebox.ll.util.memory.PointerSupporter;
import bluebox.ll.world.entity.Entity;

public class CommandOrigin implements PointerSupporter {
    private CommandOrigin(long ptr) {
        nativePtr = ptr;
    }
    private long nativePtr;
    public native Location getLocation();
    public native Angle getRotation();
    public native int getDimensionId();
    public native int getOriginType();
    public native Entity getEntity();

    @Override
    public long getNativePointer() {
        return nativePtr;
    }
}
