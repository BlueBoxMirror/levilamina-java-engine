package bluebox.ll;

import bluebox.ll.util.memory.PointerSupporter;
import bluebox.ll.util.memory.Releaser;


public class Logger implements PointerSupporter{
    public static final int OFF   = -1;
    public static final int FATAL = 0;
    public static final int ERROR = 1;
    public static final int WARN  = 2;
    public static final int INFO  = 3;
    public static final int DEBUG = 4;
    public static final int TRACE = 5;
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
    public native void log(int level,String message);
    public native String getTitle();
    public native void setLevel(int level);
    public native int getLevel();
    public native void setFlushLevel(int level);
    public native void flush();

    public void log(int level,String message,Object... args){
        log(level,String.format(message,args));
    }
    public void info(String message){
        log(INFO,message);
    }
    public void info(String message,Object... args){
        log(INFO,message,args);
    }
    public void debug(String message){
        log(DEBUG,message);
    }
    public void debug(String message,Object... args){
        log(DEBUG,message,args);
    }
    public void trace(String message){
        log(TRACE,message);
    }
    public void trace(String message,Object... args){
        log(TRACE,message,args);
    }
    public void warn(String message){
        log(WARN,message);
    }
    public void warn(String message,Object... args){
        log(WARN,message,args);
    }
    public void error(String message){
        log(ERROR,message);
    }
    public void error(String message,Object... args){
        log(ERROR,message,args);
    }
    public void fatal(String message){
        log(FATAL,message);
    }
    public void fatal(String message,Object... args){
        log(FATAL,message,args);
    }
    private static native void release(long nativePtr);

    @Override
    public long getNativePointer() {
        return nativePtr;
    }
}
