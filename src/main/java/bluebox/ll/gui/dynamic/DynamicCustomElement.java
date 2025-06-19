package bluebox.ll.gui.dynamic;

import bluebox.ll.gui.CustomElement;

import java.util.function.Function;

public record DynamicCustomElement(CustomElement element, Function<Object,String> condition,Function<Object,Object> translator) {
    public DynamicCustomElement(CustomElement element) {
        this(element, (t) -> null,(t)->t);
    }
}
