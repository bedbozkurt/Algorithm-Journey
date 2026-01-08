#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        while(low < high){
            int mid = low + (high-low)/2;
            if(nums[mid] > nums[high]){
                low = mid + 1;
            }
            else if(nums[mid] < nums[high]){
                high = mid;
            }
        }
        return nums[low];
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
    int result = sol.findMin(nums);
    cout << result;
}

