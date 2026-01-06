import java.util.*;
class Searcha2DMatrix {
    public static boolean searchMatrix(int[][] matrix, int target) {
        int low = 0;
        int high = matrix.length * matrix[0].length-1;
        
        while(low<=high){
            int mid = low + (high-low)/2;
            int row = mid/matrix[0].length;
            int col = mid%matrix[0].length;
            int value = matrix[row][col];
            if(value==target){
                return true;
            }
            else if(value<target){
                low = mid+1;
            }
            else{
                high = mid -1;
            }
        }
        return false;
    }
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int m = scan.nextInt();
        int[][] matrix = new int[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                matrix[i][j] = scan.nextInt();
            }
        }
        int target = scan.nextInt();
        System.out.println(searchMatrix(matrix,target));
        scan.close();
    }
}