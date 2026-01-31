#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    vector<string> generateParenthesis(int n) {
       vector<string> result;
       string currentString = "";
       backtrack(result, currentString, 0, 0, n);
       return result;
    }
    void backtrack(vector<string>& result, string currentString, int open, int close, int n){
        if(currentString.size() == 2*n){
            result.push_back(currentString);
            return;
        }
        if(open < n){
            backtrack(result, currentString + "(", open + 1, close, n);
        }
        if(close < open){
            backtrack(result, currentString + ")", open, close + 1, n);
        }
    }
};