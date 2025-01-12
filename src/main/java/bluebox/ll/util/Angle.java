package bluebox.ll.util;

import bluebox.ll.config.Configurable;
import com.google.gson.annotations.Expose;

public class Angle implements Comparable<Angle>,Cloneable, Configurable {
    @Expose protected float pitch,yaw;
    public Angle(float pitch, float yaw) {
        set(pitch, yaw);
    }
    public void set(float pitch, float yaw) {
        this.pitch = pitch;
        this.yaw = yaw;
    }
    public Angle() {
        this(0,0);
    }
    public float getPitch() {
        return pitch;
    }
    public float getYaw() {
        return yaw;
    }
    public void setPitch(float pitch) {
        this.pitch = pitch;
    }
    public void setYaw(float yaw) {
        this.yaw = yaw;
    }
    @Override
    public Angle clone() {
        return new Angle(pitch, yaw);
    }
    @Override
    public int compareTo(Angle o) {
        if(pitch!= o.pitch) return Float.compare(pitch, o.pitch);
        return Float.compare(yaw, o.yaw);
    }

    @Override
    public String toString() {
        return "("+String.format("%.2f", pitch)+","+String.format("%.2f", yaw)+")";
    }
}
