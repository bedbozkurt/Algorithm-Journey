import java.util.*;

public class TwoSums2 {
    public static int[] twoSum(int[] numbers, int target) {
        int left = 0;
        int right = numbers.length-1;
        int currentsum = 0; 
        while(left<right){
            currentsum = numbers[left]+numbers[right];
            if(currentsum == target){
                return new int[]{left+1,right+1};
            }
            else if(currentsum > target){
                right--;
            }
            else if(currentsum < target){
                left++;
            }
        }
        return new int[]{};
    }
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);       
        int n = scan.nextInt();
        int[] nums = new int[n];
        int target = scan.nextInt();

        for (int i = 0; i < n; i++) {
            nums[i] = scan.nextInt();
        }
        int[] answer = twoSum(nums,target);
        System.out.println(Arrays.toString(answer));
        scan.close();
    }
}