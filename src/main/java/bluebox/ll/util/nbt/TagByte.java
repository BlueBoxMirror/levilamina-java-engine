package bluebox.ll.util.nbt;

public class TagByte implements TagElement<Byte> {
    private byte value;
    public TagByte(byte value) {
        this.value = value;
    }
    public TagByte(boolean value){
        this.value = (byte)(value? 1 : 0);
    }
    public boolean toBoolean(){
        return value!= 0;
    }

    @Override
    public Byte get() {
        return value;
    }

    @Override
    public void set(Byte value) {
        this.value=value;
    }
    public void set(boolean value){
        this.value = (byte)(value? 1 : 0);
    }
    @Override
    public String toString() {
        return value+"b";
    }
    @Override
    public int getId(){
        return BYTE;
    }
    @Override
    public String getIdName(){
        return "Byte";
    }
}
