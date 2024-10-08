import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;
public class Formatter {
    public static void main(String[] args) {
        LocalDateTime now = LocalDateTime.now();
        System.out.println("Before Formatting:"+now);
        DateTimeFormatter form=DateTimeFormatter.ofPattern("HH:mm:ss\ndd/MM/YY");
        String formatDateTime =now.format(form);
        System.out.println(formatDateTime);
    }
}
