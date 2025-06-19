package bluebox.ll.command;

import bluebox.ll.command.param.CommandParameter;
import org.jetbrains.annotations.NotNull;

import java.util.HashMap;
import java.util.LinkedList;
import java.util.function.Consumer;
import java.util.function.Function;

public class Command {
    private Command(long ptr,String name){
        this.nativePtr = ptr;
        this.name = name;
    }
    public Command(@NotNull String name,@NotNull String description,@NotNull PermType permType,int flag){
        this(initInNative(name,description,permType.ordinal(),flag), name);
    }
    private static native long initInNative(String name,String description,int permType,int flag);
    private final long nativePtr;
    public final String name;
    public native void destroy();
    public void overload(Function<OverloadScope,Consumer<?>> builder){
        OverloadScope scope = new OverloadScope();
        Consumer<?> callback = builder.apply(scope);
        overload(scope.grammar.parameters, callback);
    }
    private native void overload(LinkedList<CommandParameter<?>> grammar, Consumer<?> callback);
}
