import java.time.*;
public class Date_Time {
    public static void main(String[] args) {
        LocalDate date = LocalDate.now();
        System.out.println(date);
        System.out.println(date.getDayOfMonth());
        System.out.println(date.getYear());
        System.out.println(date.getMonthValue());
        LocalTime time=LocalTime.now();
        System.out.println(time.getHour()+":"+time.getMinute());
    }
}
