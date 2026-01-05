#include <iostream>
#include <string>
#include <unordered_set>
#include <algorithm>

using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> mySet;
        int n = s.size();
        int left = 0;
        int right = 0;
        int maxLength = 0;
        while(right<n){
            if(mySet.find(s[right]) == mySet.end()){
                mySet.insert(s[right]);
                maxLength = max(maxLength,right-left+1);
                right++;
            }
            else{
                mySet.erase(s[left]);
                left++;
            }
        }
        return maxLength;
    }
};
int main(){
    string s;
    getline(cin,s);
    Solution sol;
    cout << sol.lengthOfLongestSubstring(s);
}