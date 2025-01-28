package bluebox.ll.util;

import org.jetbrains.annotations.NotNull;

import java.util.function.Supplier;

public class Result<T> {
    static public class Pair<T>{
        T value;
        String errorMessage;
        Pair(T value){
            this.value = value;
        }
        Pair(@NotNull String errorMessage){
            this.errorMessage = errorMessage;
        }
    }
    public Result(Supplier<Pair<T>> supplier){
        this.supplier = supplier;
    }
    private final Supplier<Pair<T>> supplier;
    public T getValue(){
        Pair<T> pair = supplier.get();
        if(pair.errorMessage==null){
            return pair.value;
        }else{
            throw new IllegalStateException(pair.errorMessage);
        }
    }
    public boolean hasValue(){
        Pair<T> pair = supplier.get();
        return pair.errorMessage==null;
    }
    public static <T> Pair<T> failed(@NotNull String errorMessage){
        return new Pair<>(errorMessage);
    }
    public static <T> Pair<T> success(T value){
        return new Pair<>(value);
    }
}
