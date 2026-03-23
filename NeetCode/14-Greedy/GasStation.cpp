#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalGas = 0;
        int currentGas = 0;
        int startIndex = 0;
        
        for(int i = 0; i < gas.size(); i++){
            totalGas += gas[i] - cost[i];
            currentGas += gas[i] - cost[i];
            if(currentGas < 0){
                currentGas = 0;
                startIndex = i+1;
            }

        }
        
        if(totalGas < 0){
            return -1;
        }
        return startIndex;
    }
};