// import java.util.*;
import java.io.*;
public class finputstream {
    public static void main(String[] args) {
        // Scanner sc=new Scanner(new File("Java.txt"));
    try{
        FileInputStream fin=new FileInputStream("Java.txt");
        // int i=fin.read();
        // System.out.println((char)i);
        int i=0;
        while((i=fin.read())!=-1){
        System.out.print((char)i);
        }
        fin.close();
    }
    catch(Exception e){
        System.out.println(e);
    }
    // sc.close();
}
}