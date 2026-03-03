#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i = digits.size() - 1; i >= 0; i--){
            if(digits[i] < 9){
                digits[i] += 1;
                return digits;
            }
            if(digits[i] == 9){
                digits[i] = 0;
            }
        }
        vector<int> extremeCase(digits.size() + 1);

        extremeCase[0] = 1;

        return extremeCase;
    }
};