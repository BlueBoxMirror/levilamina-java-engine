package bluebox.ll.util;

public class BlockVector extends Vector{
    public BlockVector(int x, int y, int z) {
        super(x, y, z);
    }
    public BlockVector(double x, double y, double z){
        super(Math.floor(x), Math.floor(y), Math.floor(z));
    }
    public void setX(double x) {
        this.x = Math.floor(x);
    }
    public void setY(double y) {
        this.y = Math.floor(y);
    }
    public void setZ(double z) {
        this.z = Math.floor(z);
    }
    public double getX() {
        return x+0.5;
    }
    public double getZ() {
        return z+0.5;
    }

    @Override
    public String toString() {
        return "("+getBlockX()+","+getBlockY()+","+getBlockZ()+")";
    }
}
