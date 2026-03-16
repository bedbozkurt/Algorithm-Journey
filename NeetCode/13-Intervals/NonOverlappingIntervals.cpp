#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];
        });
        int counter = 0;
        int lastEnd = intervals[0][1];
        for(int i = 1; i < intervals.size(); i++){
            if(intervals[i][0] < lastEnd){
                counter++;
            }
            else{
                lastEnd = intervals[i][1];
            } 
        }
        return counter;
    }
};