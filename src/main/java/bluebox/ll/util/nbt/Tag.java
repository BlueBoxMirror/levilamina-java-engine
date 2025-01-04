package bluebox.ll.util.nbt;

public interface Tag {
    int END=0;
    int BYTE=1;
    int SHORT=2;
    int INT=3;
    int LONG=4;
    int FLOAT=5;
    int DOUBLE=6;
    int BYTE_ARRAY=7;
    int STRING=8;
    int LIST=9;
    int COMPOUND=10;
    int INT_ARRAY=11;

    default NbtObject toNbtObject(){
        return new NbtObject(this);
    }
    int getId();
    String getIdName();
}
