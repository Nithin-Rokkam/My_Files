import java.io.*;
import java.util.*;
class Student implements Serializable{
    int id;
    String name;
    public Student(int id,String name){
        this.id=id;
        this.name=name;
    }
}
public class serialization {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the id:");
        int id=sc.nextInt();
        sc.nextLine();
        System.out.print("Enter the name:");
        String name=sc.nextLine();
        try{
            FileOutputStream fos=new FileOutputStream("Java.txt");
            ObjectOutputStream oos=new ObjectOutputStream(fos);
            Student s=new Student(id,name);
            oos.writeObject(s);
            oos.close();
        }
        catch(Exception e){
            System.out.println(e);
        }
        sc.close();
    }
}
