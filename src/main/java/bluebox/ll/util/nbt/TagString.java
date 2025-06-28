package bluebox.ll.util.nbt;

public class TagString implements Tag {
    private String value;

    public TagString(String value) {
        this.value = value;
    }

    public String get() {
        return value;
    }

    public void set(String value) {
        this.value=value;
    }

    @Override
    public String toString() {
        return '"'+value+'"';
    }
    @Override
    public int getId(){
        return STRING;
    }
    @Override
    public String getIdName(){
        return "String";
    }
}
