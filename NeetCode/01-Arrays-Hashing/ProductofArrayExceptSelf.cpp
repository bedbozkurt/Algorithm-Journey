#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> leftProduct(nums.size());
        leftProduct[0] = 1;
        for(int i = 1; i < leftProduct.size(); i++){
            leftProduct[i]  = leftProduct[i-1] * nums[i-1];;
        }
        vector<int> rightProduct(nums.size());
        rightProduct[nums.size() - 1] = 1;
        for(int i = rightProduct.size() -2; i >= 0; i--){
            rightProduct[i] = rightProduct[i+1] * nums[i+1];
        }
        vector<int> result(nums.size());
        for(int i = 0; i < leftProduct.size(); i++){
            result[i] = leftProduct[i] * rightProduct[i];
        }
        return result;
    }
};