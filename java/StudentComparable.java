import java.util.*;

class Student implements Comparable<Student>{
    private int id;
    
    public Student(int id) {
        this.id = id;
    }
    
    public int getId() {
        return id;
    }
    
    @Override
    public int compareTo(Student other) {
        return Integer.compare(this.id, other.id);
    }
    
    @Override
    public String toString() {
        return Integer.toString(id);
    }
}

public class StudentComparable {
    public static void main(String[] args) {
        TreeSet<Student> set = new TreeSet<>();
        set.add(new Student(500));
        set.add(new Student(300));
        set.add(new Student(400));
        set.add(new Student(100));
        set.add(new Student(200));

        System.out.println("Sorted elements in ascending order: " + set);
    }
}
