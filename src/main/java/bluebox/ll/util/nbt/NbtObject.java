package bluebox.ll.util.nbt;

import bluebox.ll.util.nbt.detail.SnbtParseImpl;

public class NbtObject {
    public NbtObject(Tag tag){
        this.tag=tag;
    }
    private final Tag tag;
    public int getId(){
        return tag.getId();
    }
    public String getIdName(){
        return tag.getIdName();
    }
    public boolean isCompoundOrList(){
        return tag instanceof TagCompound || tag instanceof TagList;
    }
    public void set(boolean value){
        ((TagByte)tag).set(value);
    }
    public void set(byte value){
        ((TagByte)tag).set(value);
    }
    public void set(short value){
        ((TagShort)tag).set(value);
    }
    public void set(int value){
        ((TagInt)tag).set(value);
    }
    public void set(long value){
        ((TagLong)tag).set(value);
    }
    public void set(float value){
        ((TagFloat)tag).set(value);
    }
    public void set(double value){
        ((TagDouble)tag).set(value);
    }
    public void set(String value){
        ((TagString)tag).set(value);
    }
    public boolean getBoolean(){
        return ((TagByte)tag).toBoolean();
    }
    public byte getByte(){
        return ((TagByte)tag).get();
    }
    public short getShort(){
        return ((TagShort)tag).get();
    }
    public int getInt(){
        return ((TagInt)tag).get();
    }
    public long getLong(){
        return ((TagLong)tag).get();
    }
    public float getFloat(){
        return ((TagFloat)tag).get();
    }
    public double getDouble(){
        return ((TagDouble)tag).get();
    }
    public String getString(){
        return ((TagString)tag).get();
    }
    public <T extends Tag> T as(Class<T> clazz){
        return (T)tag;
    }
    public static NbtObject parse(String snbt){
        return new NbtObject(SnbtParseImpl.parseSnbtValue(new StringBuilder(snbt)));
    }
    @Override
    public String toString(){
        return tag.toString();
    }
}
