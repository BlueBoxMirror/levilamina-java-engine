package bluebox.ll.memory;

public interface PointerSupporter {
    /**
     * 获取底层指针
     * @return 底层指针
     */
    long getNativePointer();
}
