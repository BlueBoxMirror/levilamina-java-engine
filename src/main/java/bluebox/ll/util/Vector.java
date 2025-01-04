package bluebox.ll.util;

import bluebox.ll.config.Configurable;
import com.google.gson.annotations.Expose;

public class Vector implements Cloneable,Comparable<Vector>, Configurable {
    @Expose protected double x;
    @Expose protected double y;
    @Expose protected double z;

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
    public void rotateAroundX(double angle) {
        double cos = Math.cos(angle);
        double sin = Math.sin(angle);
        double y = this.y * cos - this.z * sin;
        double z = this.y * sin + this.z * cos;
        this.y = y;
        this.z = z;
    }
    public void rotateAroundY(double angle) {
        double cos = Math.cos(angle);
        double sin = Math.sin(angle);
        double x = this.x * cos + this.z * sin;
        double z = -this.x * sin + this.z * cos;
        this.x = x;
        this.z = z;
    }
    public void rotateAroundZ(double angle) {
        double cos = Math.cos(angle);
        double sin = Math.sin(angle);
        double x = this.x * cos - this.y * sin;
        double y = this.x * sin + this.y * cos;
        this.x = x;
        this.y = y;
    }
    public void rotateAroundAxis(Vector axis, double angle) {
        double cos = Math.cos(angle);
        double sin = Math.sin(angle);
        double x = (this.x * (axis.y * axis.y + axis.z * axis.z) + (axis.x * (axis.y * this.z - axis.z * this.y))) * (1 - cos) + this.x * cos;
        double y = (this.y * (axis.x * axis.x + axis.z * axis.z) + (axis.y * (axis.z * this.x - axis.x * this.z))) * (1 - cos) + this.y * cos;
        double z = (this.z * (axis.x * axis.x + axis.y * axis.y) + (axis.z * (axis.x * this.y - axis.y * this.x))) * (1 - cos) + this.z * cos;
        this.x = x;
        this.y = y;
        this.z = z;
    }
    public void rotateAroundNonUnitAxis(Vector axis, double angle) {
        double cos = Math.cos(angle);
        double sin = Math.sin(angle);
        double x = (this.x * axis.x + (axis.y * this.z - axis.z * this.y)) * (1 - cos) + this.x * cos;
        double y = (this.y * axis.x + (axis.z * this.x - axis.x * this.z)) * (1 - cos) + this.y * cos;
        double z = (this.z * axis.x + (axis.x * this.y - axis.y * this.x)) * (1 - cos) + this.z * cos;
        this.x = x;
        this.y = y;
        this.z = z;
    }
    public Vector(){
        this(0,0,0);
    }
    public Vector(double x, double y, double z) {
        this.x = x;
        this.y = y;
        this.z = z;
    }
    public int getBlockX(){
        return (int)Math.floor(x);
    }
    public int getBlockY(){
        return (int)Math.floor(y);
    }
    public int getBlockZ(){
        return (int)Math.floor(z);
    }
    public void zero(){
        this.x=0;
        this.y=0;
        this.z=0;
    }
    public Vector add(Vector v) {
        return new Vector(x + v.x, y + v.y, z + v.z);
    }
    public Vector subtract(Vector v) {
        return new Vector(x - v.x, y - v.y, z - v.z);
    }
    public Vector multiply(double scalar) {
        return new Vector(x * scalar, y * scalar, z * scalar);
    }
    public Vector divide(double scalar) {
        return new Vector(x / scalar, y / scalar, z / scalar);
    }
    public double dot(Vector v) {
        return x * v.x + y * v.y + z * v.z;
    }
    public Vector cross(Vector v) {
        return new Vector(y * v.z - z * v.y, z * v.x - x * v.z, x * v.y - y * v.x);
    }
    public boolean isZero() {
        return x==0 && y==0 && z==0;
    }
    public Vector normalize() {
        if(isZero()) return new Vector();
        double length = length();
        return new Vector(x / length, y / length, z / length);
    }
    @Override
    public Vector clone() {
        return new Vector(x, y, z);
    }

    @Override
    public int compareTo(Vector o) {
        if(x!= o.x) return Double.compare(x, o.x);
        if(y!= o.y) return Double.compare(y, o.y);
        return Double.compare(z, o.z);
    }

    @Override
    public String toString() {
        return "("+String.format("%.2f",x)+","+String.format("%.2f",y)+","+String.format("%.2f",z)+")";
    }

    @Override
    public final boolean equals(Object o) {
        if (this == o) return true;
        if (!(o instanceof Vector vector)) return false;

        return Double.compare(x, vector.x) == 0 && Double.compare(y, vector.y) == 0 && Double.compare(z, vector.z) == 0;
    }
    public void copyTo(Vector v){
        v.x=x;
        v.y=y;
        v.z=z;
    }
    public double length(){
        return Math.sqrt(x*x+y*y+z*z);
    }
    public double angle(Vector v){
        double dot = dot(v);
        double length = length() * v.length();
        return Math.acos(dot/length);
    }
    public static Vector getMidpoint(Vector a, Vector b){
        return new Vector((a.x+b.x)/2,(a.y+b.y)/2,(a.z+b.z)/2);
    }
    public BlockVector toBlockVector(){
        return new BlockVector(getBlockX(),getBlockY(),getBlockZ());
    }
    public double distance(Vector v){
        return Math.sqrt((x-v.x)*(x-v.x)+(y-v.y)*(y-v.y)+(z-v.z)*(z-v.z));
    }
    public static Vector random(){
        return Angle.random().toVector();
    }
    public static Vector random(double length){
        return Angle.random().toVector(length);
    }
    public static Vector random(double min, double max){
        return Angle.random().toVector(Math.random()*(max-min)+min);
    }

    @Override
    public int hashCode() {
        int result = Double.hashCode(x);
        result = 31 * result + Double.hashCode(y);
        result = 31 * result + Double.hashCode(z);
        return result;
    }
}
