#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 1){
            return nums[0];
        }
        return max(helper(nums, 0, nums.size() - 2), helper(nums, 1, nums.size() - 1));
    }
    int helper(vector<int>& nums, int start, int end) {
        if(start == end){
            return nums[start];
        }
        if(nums.size() == 0){
            return 0;
        }
        vector<int> temp(nums.size());
        temp[start] = nums[start];
        temp[start + 1] = max(nums[start], nums[start + 1]);
        for(int i = start + 2; i <= end; i++){
            temp[i] = max(nums[i] + temp[i - 2], temp[i - 1]);
        }
        return temp[end];
    }
};