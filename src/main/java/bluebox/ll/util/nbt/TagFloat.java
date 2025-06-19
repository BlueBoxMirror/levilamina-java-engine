package bluebox.ll.util.nbt;

public class TagFloat implements TagElement<Float> {
    public TagFloat(float value) {
        this.value=value;
    }
    private float value;
    @Override
    public Float get() {
        return value;
    }

    @Override
    public void set(Float value) {
        this.value=value;
    }

    @Override
    public String toString() {
        return value+"f";
    }
    @Override
    public int getId(){
        return FLOAT;
    }
    @Override
    public String getIdName(){
        return "Float";
    }
}
