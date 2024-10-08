import java.util.*;
public class diff_between {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        ArrayList<Integer> arr=new ArrayList<>();
        while(sc.hasNextInt()){
            int number=sc.nextInt();
            arr.add(number);
        }
        int num1=arr.get(0);
        int num2=arr.get(arr.size()-1);
        int diff=num1-num2;
        System.out.println(diff);
        sc.close();
    }
}
