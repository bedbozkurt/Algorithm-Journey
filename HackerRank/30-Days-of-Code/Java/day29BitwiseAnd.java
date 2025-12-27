import java.io.*;
import java.util.*;

// Question Link : https://www.hackerrank.com/challenges/30-bitwise-and/problem?isFullScreen=true

class Result {
    public static int bitwiseAnd(int n, int k) {
        int maxVal = 0;

        for (int i = 1; i < n; i++) {
            for (int j = i + 1; j <= n; j++) {
                int currentAnd = i & j;

                if (currentAnd < k && currentAnd > maxVal) {
                    maxVal = currentAnd;
                }
            }
        }
        return maxVal;
    }
}

public class day29BitwiseAnd {
    public static void main(String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);

        if (scan.hasNextInt()) {
            int t = scan.nextInt();

            for (int i = 0; i < t; i++) {
                int n = scan.nextInt();
                int k = scan.nextInt();

                int result = Result.bitwiseAnd(n, k);
                System.out.println(result);
            }
        }
        
        scan.close();
    }
}