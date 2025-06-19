package bluebox.ll.util;

import com.google.gson.annotations.Expose;

public class Vector implements Cloneable , Comparable<Vector> {
    @Expose protected double x, y, z;

    public Vector() {
        set(0f,0f,0f);
    }
    public Vector(double x, double y, double z) {
        set(x,y,z);
    }
    public Vector(int x,int y,int z){
        set(x,y,z);
    }
    public int getBlockX(){
        return (int)x;
    }
    public int getBlockY(){
        return (int)y;
    }
    public int getBlockZ(){
        return (int)z;
    }
    public double getX() {
        return x;
    }
    public double getY() {
        return y;
    }
    public double getZ() {
        return z;
    }
    public void setX(double x) {
        this.x = x;
    }
    public void setY(double y) {
        this.y = y;
    }
    public void setZ(double z) {
        this.z = z;
    }
    public void setX(int x){
        setX(x+0.5f);
    }
    public void setY(int y){
        setY((float)y);
    }
    public void setZ(int z){
        setZ(z+0.5f);
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

    @Override
    public Vector clone() {
        return new Vector(x, y, z);
    }
    public float distanceTo(Vector other){
        return (float)Math.sqrt(Math.pow(x-other.x, 2)+Math.pow(y-other.y, 2)+Math.pow(z-other.z, 2));
    }

    @Override
    public int compareTo(Vector o) {
        if (this.x!= o.x) return Double.compare(this.x, o.x);
        else if (this.y!= o.y) return Double.compare(this.y, o.y);
        else return Double.compare(this.z, o.z);
    }

    @Override
    public final boolean equals(Object o) {
        if (this == o) return true;
        if (!(o instanceof Vector vector)) return false;

        return Double.compare(x, vector.x) == 0 && Double.compare(y, vector.y) == 0 && Double.compare(z, vector.z) == 0;
    }

    @Override
    public int hashCode() {
        int result = Double.hashCode(x);
        result = 31 * result + Double.hashCode(y);
        result = 31 * result + Double.hashCode(z);
        return result;
    }

    public String toBlockString(){
        return "("+getBlockX()+", "+getBlockY()+", "+getBlockZ()+")";
    }
    @Override
    public String toString() {
        return "("+String.format("%.2f", x)+", "+String.format("%.2f", y)+", "+String.format("%.2f", z)+")";
    }
}
