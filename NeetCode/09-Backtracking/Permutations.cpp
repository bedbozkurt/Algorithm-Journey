#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Solution {
    public:
        vector<vector<int>> permute(vector<int>& nums) {
            vector<vector<int>> result;
            vector<int> currentList;
            vector<bool> used(nums.size(), false);
            backtrack(nums, currentList, result, used);
            return result;
        }
        void backtrack(vector<int>& nums, vector<int>& currentList, vector<vector<int>>& result, vector<bool>& used){
            if(currentList.size() == nums.size()){
                result.push_back(currentList);
                return;
            }
            
            for(int i = 0;i<nums.size();i++){
                if(used[i] == true){
                    continue;
                }
                used[i] = true;
                currentList.push_back(nums[i]);
                backtrack(nums, currentList, result, used);
                currentList.pop_back();
                used[i] = false;
            }
        }
    };