#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       vector<vector<int>> result;
       vector<int> empty;
       backtrack(result, empty, candidates, target, 0);
       return result;
    }
private:
    void backtrack(vector<vector<int>>&result, vector<int>&currentList, vector<int>& candidates, int target, int start){
        if(target == 0){
            result.push_back(currentList);
            return;
        }
        if(target < 0){
            return;
        }
        for(int i = start; i < candidates.size(); i++){
            currentList.push_back(candidates[i]);
            backtrack(result,currentList,candidates,target-candidates[i],i);
            currentList.pop_back();
        }
    } 
    
};