package bluebox.ll.command;

import bluebox.ll.util.memory.PointerSupporter;

public class CommandOutput implements PointerSupporter {
    public CommandOutput(long nativePtr) {
        this.nativePtr = nativePtr;
    }
    private long nativePtr;
    public native void success();
    public native void error();
    public native void error(String message);
    public native void success(String message);
    public native void addMessage(String message);

    @Override
    public long getNativePointer() {
        return nativePtr;
    }
}
