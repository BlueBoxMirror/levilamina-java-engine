package bluebox.ll.util.nbt;

import java.nio.ByteBuffer;

public class TagByteArray implements Tag {
    @Override
    public int getId(){
        return BYTE_ARRAY;
    }
    @Override
    public String getIdName(){
        return "ByteArray";
    }
    public TagByteArray(byte[] bytes){
        this.value = bytes;
    }
    private byte[] value;
    public byte[] get(){
        return value;
    }

    public void set(byte[] value) {
        this.value = value;
    }

    @Override
    public String toString() {
        if(value.length == 0) return "[B;]";
        StringBuilder builder = new StringBuilder();
        builder.append("[B;");
        for(byte b : value){
            builder.append(b).append("b,");
        }
        builder.setLength(builder.length() - 1);
        builder.append("]");
        return builder.toString();
    }
}
