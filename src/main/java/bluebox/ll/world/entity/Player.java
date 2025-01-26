package bluebox.ll.world.entity;

public class Player extends Entity {
    protected Player(long ptr) {
        super(ptr);
    }
    public native String getRealName();

    public native Player getUUID();

    public enum ChatType{
        Raw                    ,
        Chat                   ,
        Translate              ,
        Popup                  ,
        JukeboxPopup           ,
        Tip                    ,
        SystemMessage          ,
        Whisper                ,
        Announcement           ,
        TextObjectWhisper      ,
        TextObject             ,
        TextObjectAnnouncement
    }
    public native void sendMessage(String message,ChatType type);
    public void sendMessage(String message){
        sendMessage(message,ChatType.Raw);
    }
    public native void updateItems();

}
