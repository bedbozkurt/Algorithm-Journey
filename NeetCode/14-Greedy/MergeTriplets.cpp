#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        bool first = false;
        bool second = false;
        bool third = false;
        for(int i = 0; i < triplets.size(); i++){
            
            if(triplets[i][0] > target[0] || triplets[i][1] > target[1] || triplets[i][2] > target[2]){
                continue;
            }
            if(triplets[i][0] == target[0]){
                first = true;
            }
            if(triplets[i][1] == target[1]){
                second = true;
            }
            if(triplets[i][2] == target[2]){
                third = true;
            }
            if(first && second && third){
                return true;
            }
        }
        return false;
    }
};