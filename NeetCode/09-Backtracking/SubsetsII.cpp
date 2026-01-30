#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        vector<int> empty;
        backtrack(0,empty, result, nums);
        return result;
    }
    void backtrack(int start, vector<int> &temp, vector<vector<int>> &result, vector<int>& nums){
        result.push_back(temp);
        for(int i = start; i < nums.size(); i++){
            if(i>start && nums[i] == nums[i-1]){
                continue;
            }
            temp.push_back(nums[i]);
            backtrack(i+1,temp,result,nums);
            temp.pop_back();
        } 

    }
};