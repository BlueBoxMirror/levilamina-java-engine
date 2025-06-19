package bluebox.ll.util.memory;

import java.lang.ref.Cleaner;
import java.util.function.LongConsumer;

public class Releaser implements Runnable {
    public Releaser(long ptr, LongConsumer releaser) {
        this.ptr = ptr;
        this.releaser = releaser;
    }
    private final long ptr;
    private final LongConsumer releaser;
    @Override
    public void run() {
        releaser.accept(ptr);
    }
    private static final Cleaner cleaner=Cleaner.create();
    public static void register(Object obj,long ptr, LongConsumer releaser){
        cleaner.register(obj, new Releaser(ptr, releaser));
    }
}
