import java.util.Scanner;

public class day09Recursion {

    //Question Link : https://www.hackerrank.com/challenges/30-recursion/problem?isFullScreen=true

    public static int factorial(int n) {
    if(n<=1){
        return 1;
    }
    
    return n*factorial(n-1);

    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        int n=scan.nextInt();
        int result =factorial(n);
        System.out.println(result);
        
        scan.close();
    }

}


