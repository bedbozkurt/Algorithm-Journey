import java.util.Scanner;

// Question Link : https://www.hackerrank.com/challenges/30-2d-arrays/problem?isFullScreen=true

public class Solution {
    public static void main(String[] args) {
      Scanner scan = new Scanner(System.in);
      int[][] arr=new int[6][6];
      for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            arr[i][j]=scan.nextInt();
        }
      }
      int maxsum=-999;
      int currentsum;
      for(int k=0;k<4;k++){
        for(int l=0;l<4;l++){
         currentsum=arr[k][l]+arr[k][l+1]+arr[k][l+2]+arr[k+1][l+1]+arr[k+2][l]+arr[k+2][l+1]+arr[k+2][l+2];
            if(currentsum>maxsum){
                maxsum=currentsum;
            }
        }
      }
      System.out.println(maxsum);
      
      scan.close();
}
}