package bluebox.ll.util.nbt;

public class TagInt implements Tag {
    private int value;
    public TagInt(int value) {
        this.value = value;
    }
    public int get() {
        return value;
    }

    public void set(int value) {
        this.value=value;
    }
    @Override
    public String toString() {
        return String.valueOf(value);
    }
    @Override
    public int getId(){
        return INT;
    }
    @Override
    public String getIdName(){
        return "Int";
    }
}
