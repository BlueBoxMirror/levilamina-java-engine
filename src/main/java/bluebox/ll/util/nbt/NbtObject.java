package bluebox.ll.util.nbt;

import bluebox.ll.util.nbt.detail.SnbtParseImpl;

public class NbtObject {
    public NbtObject(Tag tag){
        this.tag=tag;
    }
    private final Tag tag;
    public NbtObject get(String key){
        return new NbtObject(((TagCompound)tag).get(key));
    }
    public NbtObject get(int index){
        return new NbtObject(((TagList)tag).get(index));
    }
    public NbtObject put(String key,Tag value){
        ((TagCompound)tag).put(key,value);
        return this;
    }
    public int getId(){
        return tag.getId();
    }
    public String getIdName(){
        return tag.getIdName();
    }
    public boolean isCompoundOrList(){
        return tag instanceof TagCompound || tag instanceof TagList;
    }
    public void setValue(boolean value){
        ((TagByte)tag).set(value);
    }
    public void setValue(byte value){
        ((TagByte)tag).set(value);
    }
    public void setValue(short value){
        ((TagShort)tag).set(value);
    }
    public void setValue(int value){
        ((TagInt)tag).set(value);
    }
    public void setValue(long value){
        ((TagLong)tag).set(value);
    }
    public void setValue(float value){
        ((TagFloat)tag).set(value);
    }
    public void setValue(double value){
        ((TagDouble)tag).set(value);
    }
    public void setValue(String value){
        ((TagString)tag).set(value);
    }
    public boolean getAsBoolean(){
        return ((TagByte)tag).toBoolean();
    }
    public byte getAsByte(){
        return ((TagByte)tag).get();
    }
    public short getAsShort(){
        return ((TagShort)tag).get();
    }
    public int getAsInt(){
        return ((TagInt)tag).get();
    }
    public long getAsLong(){
        return ((TagLong)tag).get();
    }
    public float getAsFloat(){
        return ((TagFloat)tag).get();
    }
    public double getAsDouble(){
        return ((TagDouble)tag).get();
    }
    public String getAsString(){
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
