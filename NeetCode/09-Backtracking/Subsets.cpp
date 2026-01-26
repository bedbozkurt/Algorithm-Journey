#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> empty;
        backtrack(0,empty, result, nums);
        return result;
    }
private:
    void backtrack(int start, vector<int> &temp, vector<vector<int>> &result, vector<int>& nums){
        result.push_back(temp);
        for(int i = start; i < nums.size(); i++){
            temp.push_back(nums[i]);
            backtrack(i+1,temp,result,nums);
            temp.pop_back();
        } 

    }
};