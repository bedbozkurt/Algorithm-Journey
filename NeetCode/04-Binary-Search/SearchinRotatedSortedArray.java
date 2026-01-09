import java.util.*;
class SearchinRotatedSortedArray {
    public static int search(int[] nums, int target) {
        int left = 0;
        int right = nums.length-1;
        while(left <= right){
            int mid = left + (right-left)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[left] <= nums[mid]){
                if(target >= nums[left] && target < nums[mid]){
                    right = mid -1;
                }
                else{
                    left = mid+1;
                }
            }
            else{
                if(target > nums[mid] && target <= nums[right]){
                    left = mid +1;
                }
                else{
                    right = mid -1;
                }
            }
        }
        return -1;
    }
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[] nums = new int[n];
        for(int i = 0; i < nums.length;i++){
            nums[i]=scan.nextInt();
        }
        int target = scan.nextInt();
        System.out.println(search(nums,target));
        scan.close();
    }
}