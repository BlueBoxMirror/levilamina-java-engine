package bluebox.ll.event;

public interface Cancellable {
    boolean isCancelled();
    void cancel();
}
