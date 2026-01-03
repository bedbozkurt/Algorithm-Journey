#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        int mid = 0;
        while(left <= right){
            mid = (left+right)/2;
            if(target == nums[mid]){
                return mid;
            }
            else if(target < nums[mid]){
                right = mid-1;
            }
            else{
                left = mid+1;
            } 
        }
        return -1;
    }
};
int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
            cin >> nums[i];
    }
    int target;
    cin >> target;
    Solution sol;
    int result = sol.search(nums,target);
    cout << result;
}
