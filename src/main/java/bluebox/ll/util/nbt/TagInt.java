package bluebox.ll.util.nbt;

public class TagInt implements TagElement<Integer> {
    private int value;
    public TagInt(int value) {
        this.value = value;
    }
    @Override
    public Integer get() {
        return value;
    }

    @Override
    public void set(Integer value) {
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
