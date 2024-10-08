import java.io.*;
public class Create {
    public static void main(String[] args){
        try{
        File f=new File("Java.txt");
        f.createNewFile();
        }
        catch(IOException e){
            System.out.println("Error occoured in file creation");
        }
    }
}
