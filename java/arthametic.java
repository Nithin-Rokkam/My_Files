import java.util.Scanner;
interface I1{
    void arth(int a, int b);
}
class arthametic{
    public static void main(String arg[]){
        Scanner sc=new Scanner(System.in);
        int a1=sc.nextInt();
        int b1=sc.nextInt();
        sc.close();
        I1 ref= (a,b)-> System.out.println("Add:"+(a+b)+"\nSub:"+(a-b)+"\nmult:"+(a*b)+"\nDiv:"+(a/b));
        ref.arth(a1,b1);
    }
}