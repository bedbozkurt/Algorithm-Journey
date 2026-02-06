public class HouseRobber {
    public int rob(int[] nums) {
        if(nums.length == 0){
            return 0;
        }
        if(nums.length == 1){
            return nums[0];
        }
        int[] temp = new int[nums.length];
        temp[0] = nums[0];
        temp[1] = Math.max(nums[0], nums[1]);
        for(int i = 2; i < temp.length; i++){
            temp[i] = Math.max(nums[i] + temp[i - 2], temp[i - 1]);
        }
        return temp[nums.length - 1];
    }
}
