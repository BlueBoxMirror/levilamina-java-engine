package bluebox.ll.util.nbt;


import java.util.*;
import java.util.function.Consumer;
import java.util.function.IntFunction;
import java.util.function.Predicate;
import java.util.function.UnaryOperator;
import java.util.stream.Stream;

public class TagList implements Tag,List<Tag> ,Cloneable{
    private final ArrayList<Tag> list=new ArrayList<>();

    @Override
    public String getIdName(){
        return "List";
    }
    @Override
    public String toString(){

        if(isEmpty()) return "[]";
        StringBuilder builder=new StringBuilder();
        builder.append('[');
        for(int i=0;i<size();i++){
            builder.append(list.get(i)).append(", ");
        }
        builder.setLength(builder.length()-2);
        builder.append(']');
        return builder.toString();
    }

    @Override
    public int size() {
        return list.size();
    }

    @Override
    public boolean containsAll(Collection<?> c) {
        return list.containsAll(c);
    }

    @Override
    public <T> T[] toArray(IntFunction<T[]> generator) {
        return list.toArray(generator);
    }

    @Override
    public Stream<Tag> stream() {
        return list.stream();
    }

    @Override
    public Stream<Tag> parallelStream() {
        return list.parallelStream();
    }

    @Override
    public boolean isEmpty() {
        return list.isEmpty();
    }

    @Override
    public boolean contains(Object o) {
        return list.contains(o);
    }

    @Override
    public int indexOf(Object o) {
        return list.indexOf(o);
    }

    @Override
    public int lastIndexOf(Object o) {
        return list.lastIndexOf(o);
    }

    @Override
    public Object clone() {
        return list.clone();
    }

    @Override
    public Object[] toArray() {
        return list.toArray();
    }

    @Override
    public <T> T[] toArray(T[] a) {
        return list.toArray(a);
    }

    @Override
    public Tag get(int index) {
        return list.get(index);
    }

    @Override
    public Tag set(int index, Tag element) {
        return list.set(index, element);
    }

    @Override
    public boolean add(Tag tag) {

        return list.add(tag);
    }

    @Override
    public void add(int index, Tag element) {
        list.add(index, element);
    }

    @Override
    public Tag remove(int index) {
        return list.remove(index);
    }

    @Override
    public boolean equals(Object o) {
        return list.equals(o);
    }

    @Override
    public int hashCode() {
        return list.hashCode();
    }

    @Override
    public boolean remove(Object o) {
        return list.remove(o);
    }

    @Override
    public void clear() {
        list.clear();
    }

    @Override
    public boolean addAll(Collection<? extends Tag> c) {
        return list.addAll(c);
    }

    @Override
    public boolean addAll(int index, Collection<? extends Tag> c) {
        return list.addAll(index, c);
    }

    @Override
    public boolean removeAll(Collection<?> c) {
        return list.removeAll(c);
    }

    @Override
    public boolean retainAll(Collection<?> c) {
        return list.retainAll(c);
    }

    @Override
    public int getId(){
        return LIST;
    }

    @Override
    public ListIterator<Tag> listIterator(int index) {
        return list.listIterator(index);
    }

    @Override
    public ListIterator<Tag> listIterator() {
        return list.listIterator();
    }

    @Override
    public Iterator<Tag> iterator() {
        return list.iterator();
    }

    @Override
    public List<Tag> subList(int fromIndex, int toIndex) {
        return list.subList(fromIndex, toIndex);
    }

    @Override
    public void forEach(Consumer<? super Tag> action) {
        list.forEach(action);
    }

    @Override
    public Spliterator<Tag> spliterator() {
        return list.spliterator();
    }

    @Override
    public boolean removeIf(Predicate<? super Tag> filter) {
        return list.removeIf(filter);
    }

    @Override
    public void replaceAll(UnaryOperator<Tag> operator) {
        list.replaceAll(operator);
    }

    @Override
    public void sort(Comparator<? super Tag> c) {
        list.sort(c);
    }
}
