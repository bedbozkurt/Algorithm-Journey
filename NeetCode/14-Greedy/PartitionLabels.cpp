#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> lastOccurrence(26);
        int start = 0;
        int end = 0;
        vector<int> partitions;
        for(int i = 0; i < s.size(); i++){
            lastOccurrence[s[i] - 'a'] = i; 
        }
        for(int i = 0; i < s.size(); i++){
            end = max(end, lastOccurrence[s[i] - 'a']);
            if(i==end){
                int partlength = end - start + 1;
                partitions.push_back(partlength);
                start = i+1;
            }
        }
        return partitions;
    }
};