package bluebox.ll;


import java.io.IOException;
import java.io.OutputStream;

public class LoggerStream extends OutputStream {
    public enum PrintMode{
        INFO,
        ERROR,
        DEBUG,
        WARN
    }
    public LoggerStream(Logger logger,PrintMode mode){
        this.logger = logger;
        this.mode=mode;
    }
    public LoggerStream(Logger logger){
        this(logger, PrintMode.INFO);
    }
    private final Logger logger;
    private final StringBuffer buffer = new StringBuffer();
    public PrintMode mode;
    @Override
    public void write(int b) throws IOException {
        buffer.append((char) b);
    }
    @Override
    public void flush() throws IOException {
        String[] messages = buffer.toString().split("\n");
        for(String message:messages) {
            switch (mode) {
                case INFO:
                    logger.info(message);
                    break;
                case ERROR:
                    logger.error(message);
                    break;
                case DEBUG:
                    logger.debug(message);
                    break;
                case WARN:
                    logger.warn(message);
                    break;
            }
        }
        buffer.setLength(0);
    }
}
