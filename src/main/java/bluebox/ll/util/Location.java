package bluebox.ll.util;

import com.google.gson.annotations.Expose;

import java.util.Objects;

public class Location implements Cloneable ,Comparable<Location> {
    public static final int OVERWORLD = 0;
    public static final int NETHER = 1;
    public static final int THE_END = 2;

    public Location() {
        this.vector = new Vector();
        this.dimensionId = OVERWORLD;
    }
    public Location(double x,double y,double z,int dimensionId) {
        this.vector = new Vector(x,y,z);
        this.dimensionId = dimensionId;
    }
    public Location(Vector vector, int dimensionId) {
        this.vector = vector;
        this.dimensionId = dimensionId;
    }
    @Expose private Vector vector;
    @Expose private int dimensionId;
    public Vector getVector(){
        return vector;
    }
    public int getBlockX(){
        return vector.getBlockX();
    }
    public int getBlockY(){
        return vector.getBlockY();
    }
    public int getBlockZ(){
        return vector.getBlockZ();
    }
    public double getX(){
        return vector.getX();
    }
    public double getY(){
        return vector.getY();
    }
    public double getZ(){
        return vector.getZ();
    }
    public int getDimId(){
        return dimensionId;
    }
    public void setDimID(int dimId){
        this.dimensionId=dimId;
    }
    public void setX(double x) {
        vector.setX(x);
    }
    public void setY(double y) {
        vector.setY(y);
    }
    public void setZ(double z) {
        vector.setZ(z);
    }
    public void setX(int x){
        vector.setX(x);
    }
    public void setY(int y){
        vector.setY(y);
    }
    public void setZ(int z){
        vector.setZ(z);
    }
    public void set(double x, double y, double z) {
        setX(x);
        setY(y);
        setZ(z);
    }
    public void set(int x,int y,int z){
        setX(x);
        setY(y);
        setZ(z);
    }

    public String getDimensionName() {
        switch(dimensionId) {
            case OVERWORLD:
                return "主世界";
            case NETHER:
                return "下界";
            case THE_END:
                return "末地";
            default:
                return "未知";
        }
    }

    @Override
    public String toString() {
        return this.vector.toString()+", "+getDimensionName();
    }
    public String toBlockString() {
        return this.vector.toBlockString()+", "+getDimensionName();
    }

    @Override
    public int compareTo(Location o) {
        if(this.dimensionId!= o.dimensionId) return this.dimensionId - o.dimensionId;
        else return this.vector.compareTo(o.vector);
    }

    @Override
    public Location clone() {
        return new Location(this.vector.clone(),this.dimensionId);
    }

    @Override
    public final boolean equals(Object o) {
        if (this == o) return true;
        if (!(o instanceof Location location)) return false;

        return dimensionId == location.dimensionId && Objects.equals(vector, location.vector);
    }

    @Override
    public int hashCode() {
        int result = Objects.hashCode(vector);
        result = 31 * result + dimensionId;
        return result;
    }
}
