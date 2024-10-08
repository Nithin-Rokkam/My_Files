import java.util.Scanner;
public class Exp {
    int num;
    void check(int num,int num2){
        double a;
        try{
        a=num/num2;
        System.out.println("The div is:"+a);
    }
        catch(ArithmeticException e){
            System.out.println(e);
        }
        finally{
            System.out.println("Finally block executed");
        }
    }
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the number1:");
        int number=sc.nextInt();
        System.out.print("Enter the number2:");
        int number2=sc.nextInt();
        sc.close();
        Exp obj=new Exp();
        obj.check(number,number2);
    }
    
}
