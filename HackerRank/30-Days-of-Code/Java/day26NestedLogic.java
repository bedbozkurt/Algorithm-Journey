import java.io.*;
import java.util.*;

// Question Link : https://www.hackerrank.com/challenges/30-nested-logic/problem?isFullScreen=true

public class day26NestedLogic {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int d1 = scan.nextInt();
        int m1 = scan.nextInt();
        int y1 = scan.nextInt();
        int d2 = scan.nextInt();
        int m2 = scan.nextInt();
        int y2 = scan.nextInt();
        int fine=0;
        if (y1 > y2) {
            fine = 10000;
        } 
        else if (y1 == y2) {
            if (m1 > m2) {
                fine = (m1 - m2) * 500;
            } 
            else if (m1 == m2 && d1 > d2) {
                fine = (d1 - d2) * 15;
            }
        }
        System.out.println(fine);
        scan.close();
    }
}
