package bluebox.ll.util.nbt;

public class TagLong implements Tag {
    private long value;
    public TagLong(long value) {
        this.value = value;
    }
    public long get() {
        return value;
    }
    public void set(long value) {
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
