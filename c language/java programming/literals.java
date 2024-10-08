// we can print  print binary numbers||hexa decimals using the methods and we also increment the char 
class literals{
    public static void main(String a[]){
        int n=0b1101;
        int m=0x9E;
        double d=34;
        char c='A';
        c++;
        System.out.println(c);
        System.out.println(d);
        System.out.println(n);
        System.out.println(m);
    }
}
// import java.util.Scanner;

// public class ArrayTransformation {
//     public static void main(String[] args) {
//         Scanner scanner = new Scanner(System.in);

//         // Input n, m, u
//         int n = scanner.nextInt();
//         int m = scanner.nextInt();
//         int u = scanner.nextInt();

//         // Initialize the array A
//         int[] A = new int[n + 1];

//         // Input array elements
//         for (int i = 1; i <= n; i++) {
//             A[i] = scanner.nextInt();
//         }

//         // Process instructions
//         for (int i = 0; i < m; i++) {
//             int L = scanner.nextInt();
//             int R = scanner.nextInt();
//             int v = scanner.nextInt();
//             int p = scanner.nextInt();

//             // Calculate k
//             int k = 0;
//             for (int j = L; j <= R; j++) {
//                 if (A[j] < v) {
//                     k++;
//                 }
//             }

//             // Update A[p] using integer division
//             A[p] = (u * k) / (R - L + 1);
//         }

//         // Print the final array
//         for (int i = 1; i <= n; i++) {
//             System.out.println(A[i]);
//         }
//     }
// }
