package bluebox.ll;

import bluebox.ll.memory.PointerSupporter;
import bluebox.ll.memory.Releaser;
import bluebox.ll.world.entity.Player;

import java.io.File;

public class Logger implements PointerSupporter{
    private Logger(long nativePtr){
        this.nativePtr=nativePtr;
    }

    /**
     * <p>通过日志标志创建一个 Logger 对象</p>
     * @param tag 日志标签
     */
    public Logger(String tag){
        init(tag);
        Releaser.register(this,nativePtr,Logger::release);
    }
    private long nativePtr=0;

    private native void init(String tag);
    /**
     * 打印日志
     * @param message 日志内容
     */
    public native void info(String message);
    /**
     * 打印错误日志
     * @param message 日志内容
     */
    public native void error(String message);
    /**
     * 打印调试日志
     * @param message 日志内容
     */
    public native void debug(String message);
    /**
     * 打印警告日志
     * @param message 日志内容
     */
    public native void warn(String message);
    private static native void release(long nativePtr);
    public native void setFile(File file);
    public native void setPlayer(String uuid);
    public void setPlayer(Player player){
        setPlayer(player.getUUID());
    }

    @Override
    public long getNativePointer() {
        return nativePtr;
    }
}
