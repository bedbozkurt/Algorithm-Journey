#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    vector<string> letters {
        "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
    };
    vector<string> letterCombinations(string digits) {
      vector<string> result;
      if(digits.size() == 0){
        return result;
      }
      helper(0, digits, "", result);
      return result;      
    }
    void helper(int index, string digits, string currentString, vector<string>& result){
        if(index == digits.size()){
            result.push_back(currentString);
            return;
        }
        int num = digits[index] - '0';
        string newLetters = letters[num];
        for(char newLetter : newLetters){
            helper(index + 1, digits, currentString + newLetter, result);
        }

    }
};