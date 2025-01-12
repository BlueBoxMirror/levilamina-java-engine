package bluebox.ll.util;

import com.google.gson.annotations.Expose;

public class Vector implements Cloneable , Comparable<Vector> {
    @Expose protected float x, y, z;

    public Vector() {
        set(0f,0f,0f);
    }
    public Vector(float x, float y, float z) {
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
    public float getX() {
        return x;
    }
    public float getY() {
        return y;
    }
    public float getZ() {
        return z;
    }
    public void setX(float x) {
        this.x = x;
    }
    public void setY(float y) {
        this.y = y;
    }
    public void setZ(float z) {
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
    public void set(float x, float y, float z) {
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

        return Float.compare(x, vector.x) == 0 && Float.compare(y, vector.y) == 0 && Float.compare(z, vector.z) == 0;
    }

    @Override
    public int hashCode() {
        int result = Float.hashCode(x);
        result = 31 * result + Float.hashCode(y);
        result = 31 * result + Float.hashCode(z);
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
