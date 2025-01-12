package bluebox.ll.entity;

import org.jetbrains.annotations.NotNull;

public class Player extends Entity {
    protected Player(long ptr) {
        super(ptr);
    }
    public native String getRealName();

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
    public native void sendChat(String message,ChatType type);
    public void sendChat(String message){
        sendChat(message,ChatType.Raw);
    }
    public native void updateInventory();

}
