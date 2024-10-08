import java.time.*;
public class Zone_Id {
    public static void main(String[] args) {
    //     ZoneId zone1=ZoneId.of("Europe/Athens");
    // ZoneId zone2=ZoneId.of("Asia/Dhaka");
    LocalTime id1=LocalTime.now(ZoneId.of("Europe/Athens"));
    LocalTime id2=LocalTime.now(ZoneId.of("Europe/Athens"));
    LocalDate ld1=LocalDate.now(ZoneId.of("Europe/Athens"));
    LocalDate ld2=LocalDate.now(ZoneId.of("Europe/Athens"));

    System.out.println(id1+"\n"+ld1);
    System.out.println(id2+"\n"+ld2);
    }
}
