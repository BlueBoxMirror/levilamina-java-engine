package bluebox.ll.command;

import bluebox.ll.command.param.CommandParameter;
import bluebox.ll.util.Result;

public class OverloadScope {
    protected final CommandGrammar grammar=new CommandGrammar();
    public <T> Result<T> add(CommandParameter<T> param){
        return null;
    }
}
