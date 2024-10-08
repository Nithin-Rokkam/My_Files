import java.util.*;
public class alternate {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int num1=sc.nextInt();
        int num2=sc.nextInt();
        if(num2==0){
            System.out.println("Arthametic Exception:/ by 0");
        }else{
            int div=num1/num2;
            System.out.println(div);
        }
        sc.close();
    }
}
