import java.time.*;
import java.time.temporal.ChronoUnit;
import java.util.Scanner;
public class DateDiff {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the year1:");
        int y1=sc.nextInt();
        System.out.print("Enter the month1:");
        int m1=sc.nextInt();
        System.out.print("Enter the day1:");
        int d1=sc.nextInt();
        System.out.print("Enter the year2:");
        int y2=sc.nextInt();
        System.out.print("Enter the month2:");
        int m2=sc.nextInt();
        System.out.print("Enter the day2:");
        int d2=sc.nextInt();
        sc.close();

        LocalDate first=LocalDate.of(y1,m1,d1);
        LocalDate second=LocalDate.of(y2,m2,d2);
        // Period diff=Period.between(first, second);
        System.out.println("Difference in days: " + ChronoUnit.MONTHS.between(first, second));
    }
}
// import java.time.*;
// import java.util.Scanner;
// class Datediff{
// public static void main(String args[]){
// Scanner sc=new Scanner(System.in);
// String a1=sc.nextLine();
// String a2=sc.nextLine();
// LocalDate start=LocalDate.parse(a1);
// LocalDate end=LocalDate.parse(a2);
// Period p1=Period.between(start,end);
// System.out.println(p1);
// sc.close();
// }
// }