package bluebox.ll.gui.dynamic;

import bluebox.ll.world.entity.Player;

import java.util.function.Consumer;

abstract public class DynamicForm<T,S extends FormScope<T>> {
    public DynamicForm(Consumer<S> builder) {
        this.builder = builder;
    }
    protected final Consumer<S> builder;
    abstract protected StaticForm<?> build(FormRuntime runtime,T parameter);
    public StaticForm<?> build(Player player, T parameter){
        return build(new FormRuntime(player),parameter);
    }
    public StaticForm<?> build(FormRuntime runtime){
        return build(runtime,null);
    }
    public void send(Player player, T parameter){
        build(player,parameter).send();
    }
    public void send(Player player){
        send(player,null);
    }
}
