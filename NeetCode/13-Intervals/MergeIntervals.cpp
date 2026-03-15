#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> result;
        result.push_back(intervals[0]);
        for(int i = 1; i < intervals.size(); i++){
            vector<int>& getLast = result.back();
            if(intervals[i][0] <= getLast[1]){
                getLast[1] = max(intervals[i][1], getLast[1]);
            }
            else{
                result.push_back(intervals[i]);
            }
        }
        return result;
    }
};