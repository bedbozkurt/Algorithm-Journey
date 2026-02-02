#include <vector>
#include <string>
#include <iostream>
using namespace std;
class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> result;
        vector<string> currentList;
        backtracking(0, currentList, result, s);
        return result;
    }
    void backtracking(int index, vector<string>& currentList, vector<vector<string>>& result, string s){
        if(index == s.size()){
            result.push_back(currentList);
        }
        for(int i = index; i < s.size(); i++){
            string temp = s.substr(index, i - index + 1);
            if(isPalindrome(temp)){
                currentList.push_back(temp);
                backtracking(i + 1, currentList, result, s);
                currentList.pop_back();
            }
        }
    }
    bool isPalindrome(string s){
        int left = 0;
        int right = s.size() - 1;
    
        while(left < right){
            if(s[left] != s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};