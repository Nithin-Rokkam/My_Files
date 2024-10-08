import java.io.*;
import java.util.*;
class person implements Serializable{
    int id;
    String name;
    public person(int id,String name){
        this.id=id;
        this.name=name;
    }
}

class Student extends person{
    int fee;
    String course;
    public   Student(int id,String name,String course,int fee){
        super(id,name);
        this.course=course;
        this.fee=fee;
    }
}
public class inheritserialization{
    public static void main(String[] args)throws Exception{
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the id:");
        int id=sc.nextInt();
        sc.nextLine();
        System.out.print("Enter the name:");
        String name=sc.nextLine();
        System.out.print("Enter the course:");
        String course=sc.nextLine();
        System.out.print("Enter the fee:");
        int fee=sc.nextInt();
        FileOutputStream fos=new FileOutputStream("Java.txt");
        ObjectOutputStream oos=new ObjectOutputStream(fos);
        person s=new Student(id,name,course,fee);
        oos.writeObject(s);
        oos.close();
        sc.close();
    }
}