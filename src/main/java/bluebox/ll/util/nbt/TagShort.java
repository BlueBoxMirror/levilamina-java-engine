package bluebox.ll.util.nbt;

public class TagShort implements TagElement<Short> {
    private short value;
    public TagShort(short value) {
        this.value = value;
    }
    @Override
    public Short get() {
        return value;
    }
    @Override
    public void set(Short value) {
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
