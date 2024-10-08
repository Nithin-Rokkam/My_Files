import java.util.*;
public class even_odd {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the number:");
        int n=sc.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        for(int i=0;i<n;i++){
            int a=0;
            if(arr[i]%2==0){
                System.out.print(arr[i]+" ");
                a++;
            }
            else if(a==0){
                System.out.println("No even numbers found");
                break;
            }
        }
        sc.close();
    }
}
