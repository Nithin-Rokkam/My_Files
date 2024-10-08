import java.util.ArrayList;
import java.util.Collections;

class Employee implements Comparable<Employee> {
    private int id;
    private String name;
    private double salary;

    public Employee(int id, String name, double salary) {
        this.id = id;
        this.name = name;
        this.salary = salary;
    }

    public int getId() {
        return id;
    }

    public String getName() {
        return name;
    }

    public double getSalary() {
        return salary;
    }

    public int compareTo(Employee otherEmployee) {
        // Compare employees based on their salaries
        return Double.compare(this.salary, otherEmployee.salary);
    }

    public String toString() {
        return "Employee{" +
                "id=" + id +
                ", name='" + name + '\'' +
                ", salary=" + salary +
                '}';
    }
}

public class MEcomparable {
    public static void main(String[] args) {
        ArrayList<Employee> employees = new ArrayList<>();
        employees.add(new Employee(1, "John", 50000));
        employees.add(new Employee(2, "Alice", 60000));
        employees.add(new Employee(3, "Bob", 45000));

        System.out.println("Before sorting:");
        for (Employee emp : employees) {
            System.out.println(emp);
        }

        Collections.sort(employees);

        System.out.println("\nAfter sorting by salary:");
        for (Employee emp : employees) {
            System.out.println(emp);
        }
    }
}
