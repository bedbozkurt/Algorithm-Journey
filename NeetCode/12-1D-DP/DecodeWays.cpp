#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    int numDecodings(string s) {
        
        vector<int> dp(s.size() + 1);
        dp[0] = 1;
        if(s[0] == '0'){
            return 0;
        }
        else{
            dp[1] = 1;
        }
        for(int i = 2; i < dp.size(); i++){
            if(s[i - 1] != '0'){
                dp[i] += dp[i-1];
            }
            int ten = (s[i-2] - '0') * 10;
            int unit = (s[i-1] - '0');
            int doubleDigit = ten + unit;
            if(doubleDigit <= 26 && doubleDigit >= 10){
                dp[i] += dp[i-2];
            }
        }
        return dp[dp.size() - 1];
    }
};