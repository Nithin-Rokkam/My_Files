import java.io.*;
public class Read {    
public static void main(String[] args){
    File f=new File("java1.txt");
    File t=new File("java2.txt");
    if(f.exists()){
        f.renameTo(t);
    }
}
}