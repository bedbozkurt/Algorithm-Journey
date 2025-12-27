import java.util.Scanner;

// Question Link : https://www.hackerrank.com/challenges/30-loops/problem?isFullScreen=true

public class day05Loops {
    public static void main(String[] args) {
       Scanner scan = new Scanner(System.in);
       int n =scan.nextInt();
       for(int i=1;i<=10;i++){
        System.out.println(n + " x " + i +" = " + n*i);
       }
       
       
       scan.close();
    }
}
