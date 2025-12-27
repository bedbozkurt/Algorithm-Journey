import java.util.Scanner;

 // Question Link : https://www.hackerrank.com/challenges30-review-loop/problem?isFullScreen=true

public class day06Review {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int T=scan.nextInt();
        scan.nextLine();
        int testcase=1;
        do{
            String s=scan.nextLine();
            for(int i=0;i<s.length();i+=2){
                System.out.print(s.charAt(i));
            }
            System.out.print(" ");
            for(int j=1;j<s.length();j+=2){
                System.out.print(s.charAt(j));
            }
            System.out.println();
            testcase++;
        }while(testcase<=T);
        
        scan.close();
    }
}