package bluebox.ll.util.nbt;

public class TagString implements TagElement<String> {
    private String value;

    public TagString(String value) {
        this.value = value;
    }

    @Override
    public String get() {
        return value;
    }

    @Override
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
