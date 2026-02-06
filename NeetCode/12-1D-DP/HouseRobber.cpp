#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    int rob(vector<int>& nums) {
       if(nums.size() == 0){
            return 0;
        }
        if(nums.size() == 1){
            return nums[0];
        }
        vector<int> temp(nums.size());
        temp[0] = nums[0];
        temp[1] = max(nums[0], nums[1]);
        for(int i = 2; i < temp.size(); i++){
            temp[i] = max(nums[i] + temp[i - 2], temp[i - 1]);
        }
        
        return temp[nums.size() - 1]; 
    }
};