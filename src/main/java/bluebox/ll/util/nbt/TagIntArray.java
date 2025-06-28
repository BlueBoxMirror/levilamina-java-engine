package bluebox.ll.util.nbt;

public class TagIntArray implements Tag{
    private int[] value;

    public TagIntArray(int[] value) {
        this.value = value;
    }
    @Override
    public int getId(){
        return INT_ARRAY;
    }
    @Override
    public String getIdName(){
        return "IntArray";
    }

    public int[] get() {
        return value;
    }

    public void set(int[] value) {
        this.value = value;
    }

    public String toString() {
        if(value.length == 0) return "[I;]";
        StringBuilder builder = new StringBuilder();
        builder.append("[I;");
        for(int n : value){
            builder.append(n).append(",");
        }
        builder.setLength(builder.length() - 1);
        builder.append("]");
        return builder.toString();
    }
}
