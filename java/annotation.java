// import java.util.Scanner;
class A{
   
    void hello(){
        System.out.println("Method1");
    }
}

class B extends A{
    @Override
    void hello(){
        System.out.println("method2");
    }
}
public class annotation {
    public static void main(String[] args){
        A obj=new B();
        obj.hello();
    }
}
