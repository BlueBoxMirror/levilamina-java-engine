package bluebox.ll.gui.dynamic;

import bluebox.ll.gui.FormEvent;
import bluebox.ll.world.entity.Player;
import org.jetbrains.annotations.NotNull;

import java.util.function.Consumer;

public class ModalFormScope<T> extends FormScope<T>{
    @NotNull public String title="";
    @NotNull public String content="";
    @NotNull public String confirmButtonText="确定";
    @NotNull public String cancelButtonText="取消";
    @NotNull public Consumer<DynamicFormEvent<Boolean>> onSubmit=(e)->{};
    @NotNull public Consumer<DynamicFormEvent<FormEvent.CancelReason>> onExit=(e)->{};

    protected ModalFormScope(FormRuntime runtime, T parameter) {
        super(runtime,parameter);
    }
}
