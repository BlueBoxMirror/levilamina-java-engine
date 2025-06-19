package bluebox.ll.util.nbt;

public class TagLong implements TagElement<Long> {
    private long value;
    public TagLong(long value) {
        this.value = value;
    }
    @Override
    public Long get() {
        return value;
    }

    @Override
    public void set(Long value) {
        this.value=value;
    }
    @Override
    public String toString() {
        return value+"l";
    }
    @Override
    public int getId(){
        return LONG;
    }
    @Override
    public String getIdName(){
        return "Long";
    }
}
