import java.util.Scanner;
class Game{
    public void type(){
        System.out.println("Indoor & Outdoor ");
    }
}
class Cricket extends Game{
    public void type(){
        System.out.println("Outdoor game");
    }
}
class Badminton extends Game{
    public void type(){
        System.out.println("Indoor Game");
    }
}
class Tennis extends Game{
    public void type(){
        System.out.println("Mix game");
    }
}
public class DynamicDispatch {
    public static void main(String[] args){
        Scanner sc =new Scanner(System.in);
        Game g=new Game();
        Cricket c=new Cricket();
        Badminton b=new Badminton();
        Tennis t=new Tennis();
        System.out.print("Enter the sport u like: ");
        String sport =sc.nextLine();
        if(sport.equalsIgnoreCase("Cricket")){
            g=c;
        }else if(sport.equalsIgnoreCase("Badminton")){
            g=b;
        }else if(sport.equalsIgnoreCase("Tennis")){
            g=t;
        }else{
            System.out.println("Not in the above list");
        }
        g.type();
        sc.close();
    }
}
