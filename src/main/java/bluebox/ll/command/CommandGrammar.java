package bluebox.ll.command;

import bluebox.ll.command.param.CommandParameter;

import java.util.LinkedList;

public class CommandGrammar {
    protected final LinkedList<CommandParameter<?>> parameters = new LinkedList<>();

    public void add(CommandParameter<?> parameter) {
        parameters.add(parameter);
    }
}
