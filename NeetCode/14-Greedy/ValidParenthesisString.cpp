#include <iostream>
using namespace std;
class Solution {
public:
    bool checkValidString(string s) {
        int minLeft = 0;
        int maxLeft = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                minLeft++;
                maxLeft++;
            }
            else if(s[i] == ')'){
                minLeft--;
                maxLeft--;
            }
            else if(s[i] == '*'){
                minLeft--;
                maxLeft++;
            }
            if(maxLeft < 0){
                return false;
            }
            if(minLeft < 0){
                minLeft = 0;
            }
        }
        if(minLeft == 0){
            return true;
        }
        return false; 
    }
};