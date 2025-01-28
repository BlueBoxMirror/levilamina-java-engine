package bluebox.ll.gui.dynamic;

public class DynamicFormEvent<D> {
    protected DynamicFormEvent(FormRuntime runtime, D data){
        this.runtime = runtime;
        this.data = data;
    }
    private final FormRuntime runtime;
    public final D data;
    private boolean navigated=false;
    public boolean isNavigated() {
        return navigated;
    }
    private void preNavigate(){
        if(navigated) throw new IllegalStateException("Form has already been navigated");
        navigated=true;
    }
    public <T2> void push(DynamicForm<T2,?> form, T2 parameter) {
        preNavigate();
        runtime.push(form,parameter);
    }
    public void push(DynamicForm<?,?> form){
        push(form,null);
    }
    public void back(boolean rebuild){
        back(1,rebuild);
    }
    public void back(int step,boolean rebuild){
        preNavigate();
        runtime.back(step,rebuild);
    }
    public void back(int step){
        back(step,true);
    }
    public void back(){
        back(true);
    }
    public <T2> void back(DynamicForm<T2,?> toForm,T2 parameter){
        preNavigate();
        runtime.back(toForm,parameter);
    }
    public void back(DynamicForm<?,?> toForm,boolean rebuild){
        preNavigate();
        runtime.back(toForm,rebuild);
    }
    public void back(DynamicForm<?,?> toForm){
        back(toForm,true);
    }
    public void resend(boolean rebuild){
        preNavigate();
        runtime.resend(rebuild);
    }
    public void resend(){
        runtime.resend(true);
    }
    public <T2> void set(DynamicForm<T2,?> form, T2 parameter){
        preNavigate();
        runtime.set(form,parameter);
    }
    public void set(DynamicForm<?,?> form){
        preNavigate();
        runtime.set(form,null);
    }
    public void exit(){
        preNavigate();
    }

}
