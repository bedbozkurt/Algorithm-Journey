import java.util.Scanner;

//Question Link : https://www.hackerrank.com/challenges/30-arrays/problem?isFullScreen=true


public class day07Arrays {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        int l=scan.nextInt();
        scan.nextLine();
        int[] N=new int[l];
        
        for(int i=0;i<l;i++){
            N[i]=scan.nextInt();
        }
        
        for(int j=l-1;j>=0;j--){
            System.out.print(N[j] + " ");
        }
        
        scan.close();
    }
}
