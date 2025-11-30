import java.util.Scanner;

// Question Link: https://www.hackerrank.com/challenges/30-binary-numbers/problem?isFullScreen=true


public class Solution {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n=scan.nextInt();
        
        int count=0;
        int maxcount=0;
        while(n>0){
            int reminder=n%2;
            if(reminder==1){
                count++;
                if(count>maxcount){
                    maxcount=count;
                }
            }
            else{
                count=0;
            }
            n=n/2;
        }
        System.out.println(maxcount);
        
        scan.close();
    }
}
