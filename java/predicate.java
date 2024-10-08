import java.util.function.Predicate;
import java.util.Scanner;
class predicate {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the number: ");
        int x=sc.nextInt();
        Predicate <Integer> ref=t->t%2==0;
       boolean result=ref.test(x);
       if (result) {
        System.out.println(x + " is even.");
    } else {
        System.out.println(x + " is odd.");

    }
    sc.close();
    }
}
