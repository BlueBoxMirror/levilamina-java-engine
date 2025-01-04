package bluebox.ll;


import java.io.IOException;
import java.io.OutputStream;

public class LoggerStream extends OutputStream {
    public static final int MODE_INFO = 0;
    public static final int MODE_ERROR = 1;
    public static final int MODE_DEBUG = 2;
    public static final int MODE_WARN = 3;
    public LoggerStream(Logger logger,int mode){
        this.logger = logger;
        this.mode=mode;
    }
    public LoggerStream(Logger logger){
        this(logger,MODE_INFO);
    }
    private final Logger logger;
    private final StringBuffer buffer = new StringBuffer();
    public final int mode;
    @Override
    public void write(int b) throws IOException {
        buffer.append((char) b);
    }
    @Override
    public void flush() throws IOException {
        String[] messages = buffer.toString().split("\n");
        for(String message:messages) {
            switch (mode) {
                case MODE_INFO:
                    logger.info(message);
                    break;
                case MODE_ERROR:
                    logger.error(message);
                    break;
                case MODE_DEBUG:
                    logger.debug(message);
                    break;
                case MODE_WARN:
                    logger.warn(message);
                    break;
            }
        }
        buffer.setLength(0);
    }
}
