import java.util.*;
class CustomException extends Exception{
    public CustomException(String message){
        super(message);
    }
}

class Custom{
    public static void validateAge(int age) throws CustomException{
        if(age<0){
            throw new CustomException("Age can't be negitive...");
        }else{
            System.out.println("your age is "+age);
        }
    }
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the age:");
        int age=sc.nextInt();
        sc.close();
        try{
            validateAge(age);
        }
        catch(CustomException e){
            System.out.println(e.getMessage()+(":Enter the valide age"));
        }
        finally{
            System.out.println("Excuited successfully...");
        }
    }
}