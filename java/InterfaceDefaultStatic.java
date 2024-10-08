interface Car{
    String getName();

    String getMaxSpeed();

    default void applyBreak(){
        System.out.println("Applying break on "+getName());

    }
}

class BMW implements Car{
    public String getName(){
        return "BMW";
    }
    public String getMaxSpeed(){
        return "Speed is above 200";
    }
}




public class InterfaceDefaultStatic {
public static void main(String[] args){
Car obj=new BMW();

obj.applyBreak();
System.out.println(obj.getMaxSpeed());

}
    
}