package bluebox.ll.gui.dynamic;

import bluebox.ll.gui.ButtonForm;
import bluebox.ll.gui.FormEvent;

import java.util.function.Consumer;

public class DynamicButtonForm<T> extends DynamicForm<T,ButtonFormScope<T>> {
    public DynamicButtonForm(Consumer<ButtonFormScope<T>> builder) {
        super(builder);
    }

    @Override
    protected StaticForm<Integer> build(FormRuntime runtime, T parameter) {
        ButtonFormScope<T> scope = new ButtonFormScope<>(runtime, parameter);
        builder.accept(scope);
        ButtonForm form = new ButtonForm(scope.title,scope.content);
        scope.buttons.forEach(form::addButton);
        return new StaticForm<>(form, scope.player, (e)->{
            DynamicFormEvent<?> event;
            if(e.data==null){
                event=new DynamicFormEvent<>(runtime,e.cancelReason);
                scope.onExit.accept((DynamicFormEvent<FormEvent.CancelReason>) event);
            }
            else{
                event=new DynamicFormEvent<>(runtime,e.data);
                scope.onClicks.get(e.data).accept((DynamicFormEvent<Integer>) event);
                scope.onConfirm.accept((DynamicFormEvent<Integer>) event);
            }
            if(!event.isNavigated()) event.back();
        });
    }
}
