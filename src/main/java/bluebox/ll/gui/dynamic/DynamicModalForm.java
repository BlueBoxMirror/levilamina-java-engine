package bluebox.ll.gui.dynamic;

import bluebox.ll.gui.FormEvent;
import bluebox.ll.gui.ModalForm;

import java.util.function.Consumer;

public class DynamicModalForm<T> extends DynamicForm<T,ModalFormScope<T>> {

    public DynamicModalForm(Consumer<ModalFormScope<T>> builder) {
        super(builder);
    }
    @Override
    protected StaticForm<Boolean> build(FormRuntime runtime,T parameter){
        ModalFormScope<T> scope = new ModalFormScope<>(runtime,parameter);
        builder.accept(scope);
        ModalForm form = new ModalForm(scope.title,scope.content,scope.confirmButtonText,scope.cancelButtonText);
        return new StaticForm<>(form,scope.player,(e)->{
            DynamicFormEvent<?> event;
            if(e.data==null){
                event=new DynamicFormEvent<>(runtime,e.cancelReason);
                scope.onExit.accept((DynamicFormEvent<FormEvent.CancelReason>) event);
            }
            else{
                event=new DynamicFormEvent<>(runtime,e.data);
                scope.onSubmit.accept((DynamicFormEvent<Boolean>) event);
            }
            if(!event.isNavigated()) event.back();
        });
    }
    public static final DynamicModalForm<String> messageForm=new DynamicModalForm<>((s)->{
        s.checkParamNotNull();
        s.title="提示";
        s.content=s.parameter;
        s.onSubmit=(e)->{
            e.back(false);
        };
        s.onExit=(e)->{
            e.back(false);
        };
    });
}
