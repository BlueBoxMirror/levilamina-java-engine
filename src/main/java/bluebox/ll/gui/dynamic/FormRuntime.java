package bluebox.ll.gui.dynamic;

import bluebox.ll.world.entity.Player;

import java.util.Stack;

public class FormRuntime{
    private class FormState<T>{
        DynamicForm<T,?> factory;
        StaticForm<?> form;
        T parameter;
        FormState(DynamicForm<T,?> factory,T parameter){
            this.factory=factory;
            this.form=factory.build(FormRuntime.this,parameter);
            this.parameter=parameter;
        }
        void rebuild(){
            form=factory.build(FormRuntime.this,parameter);
        }
        void rebuild(T parameter){
            form=factory.build(FormRuntime.this,parameter);
        }
        void send(){
            form.send();
        }
    }
    protected FormRuntime(Player player){
        this.player=player;
    }
    public final Player player;
    private final Stack<FormState<?>> formStack=new Stack<>();

    public <T2> void push(DynamicForm<T2,?> form, T2 parameter) {
        FormState<T2> state=new FormState<>(form,parameter);
        formStack.push(state);
        state.send();
    }
    public void back(int step,boolean rebuild){
        if(formStack.size()<=step) return;
        for(int i=0;i<step;i++) formStack.pop();
        FormState<?> state=formStack.peek();
        if(rebuild) state.rebuild();
        state.send();
    }
    public <T2> void back(DynamicForm<T2,?> toForm,T2 parameter){
        formStack.pop();
        FormState state;
        do{
            if(formStack.size()<=1) return;
            formStack.pop();
            state=formStack.peek();
        }while(state.factory!=toForm);
        state.rebuild(parameter);
        state.send();
    }
    public void back(DynamicForm<?,?> toForm,boolean rebuild){
        formStack.pop();
        FormState state;
        do{
            if(formStack.size()<=1) return;
            formStack.pop();
            state=formStack.peek();
        }while(state.factory!=toForm);
        if(rebuild) state.rebuild();
        state.send();
    }
    public void resend(boolean rebuild){
        FormState<?> state=formStack.peek();
        if(rebuild) state.rebuild();
        state.form.send();
    }
    public <T2> void set(DynamicForm<T2,?> form, T2 parameter){
        FormState<T2> state=new FormState<>(form,parameter);
        formStack.pop();
        formStack.push(state);
        state.send();
    }

}
