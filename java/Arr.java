import java.util.*;
import java.util.Scanner;
public class Arr {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the Size: ");
        int n = sc.nextInt();

        List<Integer> list = new ArrayList<>(n);
        List<Integer> list2 = new ArrayList<>(n);

        for (int i = 0; i < n; i++) {
            System.out.print("List1: Element at " + i + ": ");
            list.add(sc.nextInt());
        }

        for (int i = 0; i < n; i++) {
            System.out.print("List 2: Element at " + i + ": ");
            list2.add(sc.nextInt());
        }

        list2.addAll(1, list);

        if (list.size() > 3) {
            list.remove(3);
        } else {
            System.out.println("Index 3 does not exist in list.");
        }

        System.out.println("\nAfter removing: ");
        System.out.println("List1: " + list);
        System.out.println("List2: " + list2);

        if (list2.contains(2)) {
            System.out.println("list2 contains 2");
        } else {
            System.out.println("list2 does not contain 2");
        }

        if (!list.isEmpty()) {
            System.out.println("First element of list: " + list.get(0));
            System.out.println("Element at index 3 of list: " + list.set(3, 4));
        } else {
            System.out.println("List is empty.");
        }

        System.out.println("Index of first occurrence of 1 in list2: " + list2.indexOf(1));
        System.out.println("Index of last occurrence of 1 in list2: " + list2.lastIndexOf(1));

        list.clear();
        sc.close();
    }
}
