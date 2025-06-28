package bluebox.ll.util.nbt;

public class TagShort implements Tag {
    private short value;
    public TagShort(short value) {
        this.value = value;
    }
    public short get() {
        return value;
    }
    public void set(short value) {
        this.value = value;
    }
    @Override
    public String toString() {
        return value+"s";
    }
    @Override
    public int getId(){
        return SHORT;
    }
    @Override
    public String getIdName(){
        return "Short";
    }
}
