package bluebox.ll.util.nbt;

public class TagDouble implements TagElement<Double> {
    private double value;
    public TagDouble(double value) {
        this.value = value;
    }

    @Override
    public Double get() {
        return value;
    }

    @Override
    public void set(Double value) {
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
