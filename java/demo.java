// class Demo{
//     public static void main(String[] args) {
//         int[] n={100,34,3};
//         for(int i=0;i<3;i++){
//         System.out.println(n[i]);}
//         System.out.println("Happy birthday");
//     }
// }
import java.util.Arrays;
import java.util.Scanner;

class Demo {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        
        int[] n=new int[a] ; 

        // Sort the array in ascending order
        for(int i=0;i<a;i++){
            n[i]=sc.nextInt();
        }
        Arrays.sort(n);
sc.close();
        // Print the first half in ascending order
        for (int i = 0; i < n.length / 2; i++) {
            System.out.print(n[i]);
            if (i < n.length / 2 - 1) {
                System.out.print(",");
            }
        }

        // Print the second half in descending order
        for (int i = n.length - 1; i >= n.length / 2; i--) {
            System.out.print("," + n[i]);
        }

        // System.out.println(); 
    }

}
