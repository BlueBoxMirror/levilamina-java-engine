package bluebox.ll;

import bluebox.ll.memory.PointerSupporter;

public class Logger implements PointerSupporter {
    private Logger(long nativePtr){
        this.isInStack=false;
        this.nativePtr=nativePtr;
    }
    public Logger(String tag){
        this.isInStack=true;
        init(tag);
    }
    private long nativePtr=0;
    private final boolean isInStack;
    private native void init(String tag);
    public native void info(String message);
    public native void error(String message);
    public native void debug(String message);
    public native void warn(String message);
    public native void dispose();

    @Override
    public long getNativePointer() {
        return nativePtr;
    }
}
