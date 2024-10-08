import java.io.*;
import java.util.*;
public class foutstream {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        //Byte input
        try{
            FileOutputStream fout=new FileOutputStream("Java.txt",true);
            String i=sc.nextLine();
            if(i.length()==1){
                byte b[]=i.getBytes();
                fout.write(b);
                fout.close();
            }
        //String Input  
        FileOutputStream foutt=new FileOutputStream("Java.txt",true);
        String s=sc.nextLine();
        byte b[]=s.getBytes();
        foutt.write(b);
        String s2=sc.nextLine();
        byte b1[]=s2.getBytes();
        foutt.write(b1);
        foutt.close();
        System.out.println("Success");
    }
    catch(Exception e){
        System.err.println(e);
    }
        sc.close();
    }
}
