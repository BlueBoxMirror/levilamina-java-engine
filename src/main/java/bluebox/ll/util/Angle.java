package bluebox.ll.util;

import com.google.gson.annotations.Expose;

public class Angle implements Comparable<Angle>,Cloneable {
    @Expose protected double pitch,yaw;
    public Angle(double pitch, double yaw) {
        set(pitch, yaw);
    }
    public void set(double pitch, double yaw) {
        this.pitch = pitch;
        this.yaw = yaw;
    }
    public Angle() {
        this(0,0);
    }
    public double getPitch() {
        return pitch;
    }
    public double getYaw() {
        return yaw;
    }
    public void setPitch(double pitch) {
        this.pitch = pitch;
    }
    public void setYaw(double yaw) {
        this.yaw = yaw;
    }
    @Override
    public Angle clone() {
        return new Angle(pitch, yaw);
    }
    @Override
    public int compareTo(Angle o) {
        if(pitch!= o.pitch) return Double.compare(pitch, o.pitch);
        return Double.compare(yaw, o.yaw);
    }

    @Override
    public String toString() {
        return "("+String.format("%.2f", pitch)+","+String.format("%.2f", yaw)+")";
    }
}
