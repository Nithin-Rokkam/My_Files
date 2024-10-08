import java.io.*;
class Student implements Serializable{
    int id;
    String name;
    public Student(int id,String name){
        this.id=id;
        this.name=name;
    }
}
public class deserialization{
    public static void main(String[] args) throws Exception{
        FileInputStream fin=new FileInputStream("Java.txt");
        ObjectInputStream ois=new ObjectInputStream(fin);
        Student s=(Student)ois.readObject();
        System.out.println(s.id+"\n"+s.name);
        ois.close();
    }
}