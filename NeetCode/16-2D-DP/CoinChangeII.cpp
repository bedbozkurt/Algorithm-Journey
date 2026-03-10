#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<int> combination(amount + 1);
        combination[0] = 1;
        for(int i = 0; i < coins.size(); i++){
            for(int j = coins[i]; j <= amount; j++){
                combination[j] = combination[j] + combination[j-coins[i]]; 
            }
        }
        return combination[amount]; 
    }
};