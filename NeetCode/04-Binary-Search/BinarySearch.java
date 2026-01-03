import java.util.*;
class BinarySearch {
    public static int search(int[] nums, int target) {
        int left = 0;
        int right = nums.length-1;
        int mid = 0;
        while(left <= right){
            mid = (left+right)/2;
            if(target == nums[mid]){
                return mid;
            }
            else if(target < nums[mid]){
                right = mid-1;
            }
            else{
                left = mid+1;
            } 
        }
        return -1;
    }
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[] nums = new int[n];
        for(int i = 0; i < n; i++){
            nums[i] = scan.nextInt();
        }
        int target = scan.nextInt();
        System.out.println(search(nums,n));
        scan.close();
    }
}