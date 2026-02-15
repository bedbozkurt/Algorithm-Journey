#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(int i = 0; i< nums.size(); i++){
            sum += nums[i];
        }
        if(sum % 2 != 0){
            return false;
        }
        int target = sum / 2;
        vector<bool> dp(target + 1); 
        dp[0] = true;
        for(int i = 1; i < dp.size(); i++){
            dp[i] = false;
        }
        for(int i = 0; i < nums.size(); i++){
            for(int j = target; j >= nums[i]; j--){
                if(dp[j - nums[i]] == true){
                    dp[j] = true;
                }
            }

        }
        return dp[target];
    }
};