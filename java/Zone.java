
import java.time.ZoneId;
class Zone{
    public static void main(String[] args){
        for(String s:ZoneId.getAvailableZoneIds()){
            System.out.println(s);
        }
    }
}