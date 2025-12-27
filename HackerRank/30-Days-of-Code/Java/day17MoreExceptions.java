import java.util.*;
import java.io.*;

// Question Link : https://www.hackerrank.com/challenges/30-more-exceptions/problem?isFullScreen=true

class Calculator{
   public int power(int n, int p) throws Exception{
        if(n<0 || p<0 ){
            throw new Exception("n and p should be non-negative");
        }
        return (int) Math.pow(n, p);
    }
}
public class day17MoreExceptions{

    public static void main(String[] args) {
    
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        while (t-- > 0) {
        
            int n = scan.nextInt();
            int p = scan.nextInt();
            Calculator myCalculator = new Calculator();
            try {
                int ans = myCalculator.power(n, p);
                System.out.println(ans);
            }
            catch (Exception e) {
                System.out.println(e.getMessage());
            }
        }
        scan.close();
    }
}
