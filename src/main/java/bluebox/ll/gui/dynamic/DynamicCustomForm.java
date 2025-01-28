package bluebox.ll.gui.dynamic;

import bluebox.ll.gui.CustomForm;
import bluebox.ll.gui.FormEvent;

import java.util.ArrayList;
import java.util.function.Consumer;

public class DynamicCustomForm<T> extends DynamicForm<T,CustomFormScope<T>> {
    public DynamicCustomForm(Consumer<CustomFormScope<T>> builder) {
        super(builder);
    }

    @Override
    protected StaticForm<ArrayList<Object>> build(FormRuntime runtime, T parameter) {
        CustomFormScope<T> scope = new CustomFormScope<>(runtime, parameter);
        builder.accept(scope);
        CustomForm form = new CustomForm(scope.title);
        scope.elements.forEach((element)->{
            form.add(element.element());
        });
        return new StaticForm<>(form, scope.player, (e)->{
            DynamicFormEvent<?> event;
            if(e.data==null){
                event=new DynamicFormEvent<>(runtime,e.cancelReason);
                scope.onCancel.accept((DynamicFormEvent<FormEvent.CancelReason>) event);
            }
            else{
                event=new DynamicFormEvent<>(runtime,e.data);
                for (int i = 0; i < e.data.size(); i++) {
                    Object data = e.data.get(i);
                    DynamicCustomElement element=scope.elements.get(i);
                    String errorMessage=element.condition().apply(data);
                    if(errorMessage!=null){
                        event.push(DynamicModalForm.messageForm,"§c"+errorMessage);
                        return;
                    }
                    scope.results.add(element.translator().apply(e.data.get(i)));
                }
                scope.isSubmitted=true;
                scope.onSubmit.accept((DynamicFormEvent<ArrayList<Object>>) event);
            }
            if(!event.isNavigated()) event.back();
        });
    }
}
