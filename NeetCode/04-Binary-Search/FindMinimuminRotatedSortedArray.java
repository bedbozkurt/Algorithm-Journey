import java.util.*;
class FindMinimuminRotatedSortedArray {
    public static int findMin(int[] nums) {
        int low = 0;
        int high = nums.length-1;
        while(low < high){
            int mid = low + (high-low)/2;
            if(nums[mid] > nums[high]){
                low = mid + 1;
            }
            else if(nums[mid] < nums[high]){
                high = mid;
            }
        }
        return nums[low];
    }
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[] nums = new int[n];
        for(int i = 0; i < n; i++){
            nums[i] = scan.nextInt();
        }
        System.out.println(findMin(nums));
        scan.close();
    }
}