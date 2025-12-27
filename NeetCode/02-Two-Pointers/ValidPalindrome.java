import java.util.Scanner;
public class ValidPalindrome {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        System.out.println(isPalindrome(s));
        scan.close(); 
    }
    public static boolean isPalindrome(String s) {
      s = s.toLowerCase();
      int low = 0;
      int high = s.length() - 1;

      while(low < high){
        
        if (!Character.isLetterOrDigit(s.charAt(low))) {
            low++;
            continue;
        }
        if (!Character.isLetterOrDigit(s.charAt(high))) {
            high--;
            continue;
        }
        if(s.charAt(low) != s.charAt(high)){
            return false;
        }
        
        low++;
        high--;
      }
       
      return true;
    }
}