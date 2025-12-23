#include <string>
#include <iostream>
#include <cctype>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
      int low = 0;
      int high = s.length() - 1;

      while(low < high){
        
        if (!isalnum(s[low])) {
            low++;
            continue;
        }
        if (!isalnum(s[high])) {
            high--;
            continue;
        }
        if(tolower(s[low]) != tolower(s[high])){
            return false;
        }
        
        low++;
        high--;
      }
      return true;
    }
    
};
int main(){
        Solution sol;
        string s;
        getline(cin,s);
        cout << sol.isPalindrome(s);
}