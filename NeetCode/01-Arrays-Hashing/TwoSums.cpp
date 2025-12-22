#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numsMap;

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];

        if (numsMap.find(complement) != numsMap.end()) {
            return {numsMap[complement], i};
        }

        numsMap[nums[i]] = i;
    }
    return {};
    }
};
int main() {
    int size, target;

    cin >> size;
    Solution sol;

    vector<int> nums(size);
    for (int i = 0; i < size; i++) {
        cin >> nums[i];
    }

    cin >> target;

    vector<int> result = sol.twoSum(nums, target);

    return 0;
}