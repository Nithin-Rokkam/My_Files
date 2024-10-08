import java.io.*;
public class Check {
    public static void main(String[] args) throws IOException{
        File f=new File("java.txt");
        if(f.exists()){
            System.out.println(f.length());
            System.out.println("File location:-"+f.getAbsolutePath());
            System.out.println(f.canRead());

        }
    }
}
