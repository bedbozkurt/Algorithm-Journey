#include <vector>
using namespace std;
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> dp (nums.size());
       for(int i = 0; i < dp.size(); i++){
        dp[i] = 1;
       } 
       for(int i = 1; i < nums.size(); i++){
        for(int j = 0; j < i; j++){
            if(nums[j] < nums[i] && (dp[j] + 1) > dp[i]){
                dp[i] = dp[j] + 1;
            }
        }
       }
       int maxLen = 0;
       for(int i = 0; i < dp.size(); i++){
        if(dp[i] > maxLen){
            maxLen = dp[i];
        }
       }
       return maxLen;
    }
};