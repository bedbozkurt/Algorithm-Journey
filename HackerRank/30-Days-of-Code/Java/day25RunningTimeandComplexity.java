import java.util.*;

// Question Link : https://www.hackerrank.com/challenges/30-running-time-and-complexity/problem?isFullScreen=true

public class day25RunningTimeandComplexity {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int T = scan.nextInt();
        for(int i = 0; i < T; i++){
            int n = scan.nextInt();
            
            if (isPrime(n)) {
                System.out.println("Prime");
            } else {
                System.out.println("Not prime");
            }
        }
        scan.close();
    }
    public static boolean isPrime(int n) {
        if (n <= 1) {
            return false;
        }
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                return false; 
            }
        }
        
        return true; 
    }
}