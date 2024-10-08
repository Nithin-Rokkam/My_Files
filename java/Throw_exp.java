public class Throw_exp {
    static void demo(){
        try{
            throw new NullPointerException("Demo");
        }
        catch(NullPointerException e){
            System.out.println("Caught inside demo");
            throw e;
        }
    }
    public static void main(String[] args) {
        try{
            demo();
        }
        catch(NullPointerException e){
            System.out.println("Recaught:"+e);
        }
    }
}
 