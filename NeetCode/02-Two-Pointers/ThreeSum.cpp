#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std; 
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i =0; i < n-1;i++){
            int left = i + 1;
            int right = n-1;
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }
               
            while(left < right){
                int sum = nums[i] + nums[left] + nums[right];
                if(sum < 0){
                    left++;
                }
                else if(sum > 0){
                    right--;
                }
                else {
                    result.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                    while(left < right && nums[left] == nums[left-1]){
                        left++;
                    }
                    while(left < right && nums[right] == nums[right+1]){
                        right--;
                    }
                }
            }
            
        }
        
        return result;
    }
};
int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        Solution sol;
        vector<vector<int>> result = sol.threeSum(nums);
        for(int i = 0; i < result.size(); i++){
        cout << "[";
        for(int j = 0; j < result[i].size(); j++){
            cout << result[i][j] << (j < result[i].size()-1 ? "," : "");
        }
        cout << "]" << (i < result.size()-1 ? "," : "");
        }
        
}