#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
        }
        if(((target+sum) % 2 != 0)  || sum < abs(target)){
            return 0;
        }
        int newTarget = (sum + target) / 2;
        vector<int> dp(newTarget + 1);
        dp[0] = 1;
        for(int num:nums){
            for(int j = newTarget; j >= num; j--){
                dp[j] += dp[j-num];
            }
        }
        return dp[newTarget];
    }
};