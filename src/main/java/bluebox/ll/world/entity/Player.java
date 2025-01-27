package bluebox.ll.world.entity;

import java.util.UUID;

public class Player extends Entity {
    protected Player(long ptr) {
        super(ptr);
    }
    public native String getRealName();

    public native UUID getUUID();

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
