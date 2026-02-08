#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
        if (s.size() < 1){
            return "";
        } 
        int start = 0;
        int maxLen = 0;
        for(int i = 0; i < s.size(); i++){
                int len1 = helper(s, i, i);
                int len2 = helper(s, i + 1, i);
                int len = max(len1, len2);
                if(len > maxLen){
                    maxLen = len;
                    start = i- (len-1)/2;
                }
        }
        return s.substr(start, maxLen);
    }
    int helper(const string& s, int right, int left){
        while(left >= 0 && right < s.size() && s[left] == s[right]){
            left--;
            right++;
        }
        return right - left - 1;
    }
};