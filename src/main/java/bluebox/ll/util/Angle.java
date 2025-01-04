package bluebox.ll.util;

import bluebox.ll.config.Configurable;
import com.google.gson.annotations.Expose;

public class Angle implements Cloneable, Comparable<Angle>, Configurable {
    public static final int NORTH = 0;
    public static final int EAST = 1;
    public static final int SOUTH = 2;
    public static final int WEST = 3;

    @Expose protected double pitch;
    @Expose protected double yaw;

    public double getPitch() {
        return pitch;
    }
    public void setPitch(double pitch) {
        if(-90 <= pitch && pitch <= 90) this.pitch = pitch;
        else if(pitch > 90) this.pitch = 90;
        else if(pitch < -90) this.pitch = -90;
    }
    public double getYaw() {
        return yaw;
    }
    public void setYaw(double yaw) {
        this.yaw=(yaw+180)%360-180;
    }

    public Angle(double yaw, double pitch) {
        this.pitch = pitch;
        this.yaw = yaw;
    }
    public Angle(){
        this(0,0);
    }

    public int toFacing(){
        return (int)Math.round(yaw / 90) % 4;
    }

    public Angle clone() {
        return new Angle(this.yaw, this.pitch);
    }

    @Override
    public final boolean equals(Object o) {
        if (this == o) return true;
        if (!(o instanceof Angle angle)) return false;

        return Double.compare(pitch, angle.pitch) == 0 && Double.compare(yaw, angle.yaw) == 0;
    }

    @Override
    public int hashCode() {
        int result = Double.hashCode(pitch);
        result = 31 * result + Double.hashCode(yaw);
        return result;
    }


    @Override
    public int compareTo(Angle o) {
        if (pitch == o.pitch) {
            return Double.compare(yaw, o.yaw);
        } else {
            return Double.compare(pitch, o.pitch);
        }
    }
    public Vector toVector(){
        double x = Math.sin(pitch) * Math.cos(yaw);
        double y = Math.sin(pitch) * Math.sin(yaw);
        double z = Math.cos(pitch);
        return new Vector(x, y, z);
    }
    public Vector toVector(double length){
        return toVector().multiply(length);
    }
    public static Angle random(){
        return new Angle(Math.random() * 360-180, Math.random() * 180 - 90);
    }

    @Override
    public String toString() {
        return "(" + String.format("%.2f", pitch) + ", " + String.format("%.2f", yaw) + ")";
    }
}
