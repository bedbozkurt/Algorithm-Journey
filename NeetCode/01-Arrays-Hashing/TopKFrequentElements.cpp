#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> numsMap;
        vector<int> result(k);
        for(int i = 0; i < nums.size(); i++){
            numsMap[nums[i]]++;
        }
        
        for(int i = 0; i < k; i++){
            int maxFreq = -1;
            int mostFrequentKey = -1;
            for (auto item : numsMap) {
                int key = item.first;
                int currentFreq = item.second;
                if (currentFreq > maxFreq) {
                    maxFreq = currentFreq; 
                    mostFrequentKey = key;  
                }
            }
            result[i] = mostFrequentKey;
            numsMap.erase(mostFrequentKey);
        }
        return result;
    }
};