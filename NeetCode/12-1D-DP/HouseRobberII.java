public class HouseRobberII {
    public int rob(int[] nums) {
        if(nums.length == 1){
            return nums[0];
        }
        return Math.max(helper(nums, 0, nums.length - 2), helper(nums, 1, nums.length - 1));
    }
    private int helper(int[] nums, int start, int end){
        if(start == end){
            return nums[start];
        }
        if(nums.length == 0){
            return 0;
        }
        int[] temp = new int[nums.length];
        temp[start] = nums[start];
        temp[start + 1] = Math.max(nums[start], nums[start + 1]);
        for(int i = start + 2; i <= end; i++){
            temp[i] = Math.max(nums[i] + temp[i - 2], temp[i - 1]);
        }
        return temp[end];
    }
}
