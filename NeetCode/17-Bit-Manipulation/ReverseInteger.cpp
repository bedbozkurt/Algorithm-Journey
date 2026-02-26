#include <iostream>
#include <climits>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        int reverseNumber = 0;
        
        while(x != 0){
            if(reverseNumber > INT_MAX / 10){
                return 0;
            }
            if(reverseNumber < INT_MIN / 10){
                return 0;
            }
            
            int lastDigit = x % 10;
            reverseNumber = reverseNumber * 10;
            reverseNumber += lastDigit;
            x = x / 10;
        }
        return reverseNumber;

    }
};