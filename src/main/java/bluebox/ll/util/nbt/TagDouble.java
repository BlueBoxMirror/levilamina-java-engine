package bluebox.ll.util.nbt;

public class TagDouble implements Tag {
    private double value;
    public TagDouble(double value) {
        this.value = value;
    }

    public double get() {
        return value;
    }

    public void set(double value) {
        this.value=value;
    }
    @Override
    public String toString() {
        return String.valueOf(value);
    }
    @Override
    public int getId(){
        return DOUBLE;
    }
    @Override
    public String getIdName(){
        return "Double";
    }
}
