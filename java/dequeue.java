import java.util.*;
public class dequeue {
    public static void main(String[] args) {
        Deque<String> name=new LinkedList<>();
        name.add("Hello");
        name.addFirst("Hi");
        name.push("Good afternoon");
        name.push("Hi");
        name.addLast(".");
        name.offer("Bye");
        name.offerFirst("greetings");
        System.out.println("Before deletion"+name);
        name.pop();
        name.poll();
        System.out.println("After deletion:"+name);
    }
}
