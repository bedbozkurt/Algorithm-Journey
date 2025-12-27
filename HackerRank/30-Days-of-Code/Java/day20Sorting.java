import java.util.Scanner;

// Question Link : https://www.hackerrank.com/challenges/30-sorting/problem?isFullScreen=true

public class day20Sorting {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[] a = new int[n];
        
        for(int i = 0; i < n; i++){
            a[i] = scan.nextInt();
        }
        
        int sumOfSwaps = 0;
        
        for (int i = 0; i < n; i++) {
            int numberOfSwaps = 0;
            
            for (int j = 0; j < n - 1; j++) {
                if (a[j] > a[j+1]) {
                    int temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                    numberOfSwaps++;
                    sumOfSwaps++; 
                }
            }
            if (numberOfSwaps == 0) {
                break;
            }
        }

        System.out.println("Array is sorted in " + sumOfSwaps + " swaps.");
        System.out.println("First Element: " + a[0]);
        System.out.println("Last Element: " + a[n - 1]); 
        
        scan.close();
    }
}