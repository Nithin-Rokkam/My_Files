import java.time.LocalDate;
import java.util.Scanner;
public class DisplayTime {
    public static void main(String[] args) {
        // String dt=args[0];
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter year:");
        int y=sc.nextInt();
        System.out.print("Enter month:");
        int m=sc.nextInt();
        System.out.print("Enter day:");
        int d=sc.nextInt();
        
sc.close();
        LocalDate date=LocalDate.of(y,m,d);
        LocalDate present=LocalDate.now();
        System.out.println(date.getYear());
        System.out.println(date.getMonth());
        System.out.println(date.getDayOfWeek());
        System.out.println("The Date is:"+d+"-"+m+"-"+y);
        System.out.println("The present Date is:"+present);
        // int d1=date.getYear();
        // int d2=present.getYear();
        int m1=date.getMonthValue();
        int m2=present.getMonthValue();
        int m3=m2-m1;
        System.out.println(m3);
    }
}
// wap to take date and time form user and also take system tym and calculate the difference bw the tym.
// have to do the addition of date and tym