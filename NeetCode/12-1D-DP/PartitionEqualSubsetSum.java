import java.util.*;
class Solution {
    public boolean canPartition(int[] nums) {
        int sum = 0;
        for(int i = 0; i< nums.length; i++){
            sum += nums[i];
        }
        if(sum % 2 != 0){
            return false;
        }
        int target = sum / 2;
        boolean[] dp = new boolean[target + 1]; 
        dp[0] = true;
        for(int i = 1; i < dp.length; i++){
            dp[i] = false;
        }
        for(int i = 0; i < nums.length; i++){
            for(int j = target; j >= nums[i]; j--){
                if(dp[j - nums[i]] == true){
                    dp[j] = true;
                }
            }

        }
        return dp[target];
    }
}