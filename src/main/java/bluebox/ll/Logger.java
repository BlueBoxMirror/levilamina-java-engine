package bluebox.ll;

import bluebox.ll.memory.PointerSupporter;
import bluebox.ll.plugin.LeviLamina;

public class Logger implements PointerSupporter {
    private Logger(long nativePtr){
        this.isInStack=false;
        this.nativePtr=nativePtr;
    }

    /**
     * <p>通过日志标志创建一个 Logger 对象</p>
     * <p>注意: 您需要在不使用它的时候，手动调用 {@link #dispose()} 方法释放资源</p>
     * @param tag 日志标签
     */
    public Logger(String tag){
        this.isInStack=true;
        init(tag);
    }
    private long nativePtr=0;
    private final boolean isInStack;

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
    /**
     * <h5>释放资源</h5>
     * <p>若您使用的是底层分配的 Logger 对象(如 {@link bluebox.ll.plugin.Plugin#getLogger()} )，则不需要调用该方法，系统会自动释放资源。</p>
     * <p>若您使用的是手动分配的 Logger 对象(如 {@code new Logger("tag")} )，则需要调用该方法，释放资源。</p>
     * <strong>注意：释放后不要再使用该对象了</strong>
     */
    public native void dispose();

    @Override
    public long getNativePointer() {
        return nativePtr;
    }
}
