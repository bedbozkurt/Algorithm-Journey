#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int> set(nums.begin(), nums.end());
       int maxLength = 0;
       for(int num : set){
        if(!set.count(num-1)){
            int currentNum = num;
            int currentLength = 1;
            while(set.count(currentNum + 1)){
                currentNum++;
                currentLength++;
            }
            maxLength = max(maxLength, currentLength);
        }
       }
       return maxLength;  
    }
};