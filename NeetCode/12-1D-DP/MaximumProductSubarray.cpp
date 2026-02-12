#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int currentMax = nums[0];
       int currentMin = nums[0];
       int result = nums[0];
       for(int i = 1; i < nums.size(); i++){
        int temp = currentMax;
        currentMax = max(nums[i], max(nums[i] * currentMax, nums[i] * currentMin));
        currentMin = min(nums[i], min(nums[i] * temp, nums[i] * currentMin));
        result = max(result, currentMax);
       } 
       return result;
    }
};