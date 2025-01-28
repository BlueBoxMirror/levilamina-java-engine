package bluebox.ll.gui.dynamic;

import bluebox.ll.world.entity.Player;

public class FormScope<T>{
    protected FormScope(FormRuntime runtime, T parameter){
        this.runtime = runtime;
        this.player = runtime.player;
        this.parameter = parameter;
    }
    protected final FormRuntime runtime;
    public final Player player;
    public final T parameter;
    public void checkParamNotNull(){
        if(parameter == null) throw new IllegalArgumentException("Parameter cannot be null");
    }
}
