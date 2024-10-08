import java.io.*;
public class bufferedreader {
    static boolean isPalindrome(String pal){
        int left=0;
        int right=pal.length()-1;
        while(left<right){
            if(pal.charAt(left)!=pal.charAt(right)){
                return false;
            }
            left++;
            right--;
        }
        return true; 
    }
    public static void main(String[] args) {
        try{
            BufferedReader br=new BufferedReader(new FileReader("Java.txt"));
            String line;
            while((line=br.readLine())!=null){
                // String processedLine = line.replaceAll("\\s+", "").toLowerCase();//to handle case sensitive 
                if(isPalindrome(line)){
                    System.out.println(line+" is palindrome");
                }else{
                    System.out.println(line+" is not a palindrome");
                }
            }
            br.close();
        }
        catch(Exception e){
            System.out.println(e);
        }
    }
}
