public class Practice {
    public static void main(String[] args) {
        int arr[]=new int[5];
        try{
            arr[0]=10/ 0;
            System.out.println(arr[6]);//throws array out of bounds exception
            // System.out.println(Integer.parseInt(x));
        }
        // catch(ArithmeticException e){
        //     System.out.println(e+"Handled Arthametic exception");
        // }
        // catch(ArrayIndexOutOfBoundsException e){
        //     System.out.println(e+"Handles Array exception");
        // }
        // catch(Exception e){
        //     System.out.println(e+"Handled Number format exception");
        // }
        // finally{
        //     System.out.println("Finaly excuited");
        // }

        //MULTI_EXCEPTION CAUTCHING.
        // catch(ArithmeticException|ArrayIndexOutOfBoundsException e){
        //     System.out.println("Handled all errors");
        // }
        
        //GENERLAIXED EXCEPTION HANDLER
        catch(Throwable e){
            System.out.println(e);
        }
        System.out.println("After exception handling");
    }
}
