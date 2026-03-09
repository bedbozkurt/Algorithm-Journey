#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int hold = -prices[0];
        int rest = 0;
        int sold = 0;
        for(int i = 0; i < prices.size(); i++){
            int tempHold = hold;
            int tempRest = rest;
            int tempSold = sold;
            hold = max(tempRest-prices[i], tempHold);
            sold = tempHold + prices[i];
            rest = max(tempRest, tempSold);
        }
        return max(sold, rest); 
    }
};