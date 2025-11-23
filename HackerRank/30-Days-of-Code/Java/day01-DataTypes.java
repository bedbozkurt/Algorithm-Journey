import java.util.Scanner;
//Question Link : https://www.hackerrank.com/challenges/30-data-types/problem?isFullScreen=true

public class Solution {
	
    public static void main(String[] args) {
        int i = 4;
        double d = 4.0;
        String s = "HackerRank ";
		
        Scanner scan = new Scanner(System.in);

        int i2=scan.nextInt();
        double d2=scan.nextDouble();
        String s2=scan.nextLine();
        String s3=scan.nextLine();
        System.out.println(i+i2);
        System.out.println(d2+d);
        System.out.print(s+s3);

       
        scan.close();
    }
}