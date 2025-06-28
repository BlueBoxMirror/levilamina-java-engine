package bluebox.ll.util.nbt;

public class TagFloat implements Tag {
    public TagFloat(float value) {
        this.value=value;
    }
    private float value;
    public float get() {
        return value;
    }

    public void set(float value) {
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
