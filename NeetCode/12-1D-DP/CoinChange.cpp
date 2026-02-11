#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> arr(amount + 1);
        for(int i = 0; i < arr.size(); i++){
            arr[i] = amount + 1;
        }
        arr[0] = 0;
        for(int i = 1; i < arr.size(); i++){
            for(int coin : coins){
                if(coin <= i){
                    arr[i] = min(arr[i], arr[i - coin] + 1);
                }
            }
        }
        if(arr[amount] == amount + 1){
            return -1;
        }
        return arr[amount];
    }
};