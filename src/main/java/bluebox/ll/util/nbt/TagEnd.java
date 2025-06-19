package bluebox.ll.util.nbt;

public class TagEnd implements Tag {
    @Override
    public String toString() {
        return "null";
    }
    @Override
    public int getId(){
        return END;
    }
    @Override
    public String getIdName(){
        return "End";
    }
}
