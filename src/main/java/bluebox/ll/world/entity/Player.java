package bluebox.ll.world.entity;

import bluebox.ll.util.Location;
import bluebox.ll.util.Vector;
import bluebox.ll.world.container.Container;
import bluebox.ll.world.item.ItemStack;
import org.jetbrains.annotations.NotNull;
import org.jetbrains.annotations.Nullable;

import java.util.ArrayList;
import java.util.Map;
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
    public static native ArrayList<Player> getOnline();
    public native void updateChunks();
    public native void sendParticlePacket(double x, double y, double z, int dimensionId, String type);
    public native ItemStack getHand();
    public native ItemStack getOffHand();
    public void sendParticlePacket(Location location, String type){
        sendParticlePacket(location.vector.getX(),location.vector.getY(),location.vector.getZ(),location.dimensionId,type);
    }
    public void sendParticlePacket(Vector vector, String type){
        sendParticlePacket(vector.getX(),vector.getY(),vector.getZ(),getDimensionId(),type);
    }
    public native Container getInventory();
    public native Container getEnderChest();
    public native Container getArmor();
    public native void give(ItemStack item);
    public void clear(){
        getInventory().clear();
        getOffHand().delete();
        getArmor().clear();
        updateItems();
    }
    public static native void sendMessages(String message,ChatType type);
    public static void sendMessages(String message){
        sendMessages(message,ChatType.Raw);
    }
    public static native void sendParticlePackets(double x, double y, double z, int dimensionId, String type);
    public static void sendParticlePackets(Location location, String type){
        sendParticlePackets(location.vector.getX(),location.vector.getY(),location.vector.getZ(),location.dimensionId,type);
    }

}
