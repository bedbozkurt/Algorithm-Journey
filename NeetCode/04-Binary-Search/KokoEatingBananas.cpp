#include <iostream>
#include <vector>
#include <algorithm> 
#include <cmath>     

using namespace std;
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = 0;
        for (int pile : piles) {
        high =max(high, pile);
        }
        while(low < high){
            int mid = low + (high - low) / 2;
            long long totalhours = 0;
            for(int i = 0;i<piles.size();i++){
                int hours = (piles[i] + mid - 1) / mid;
                totalhours +=hours;
            }
            
            if(totalhours <= h){
                high = mid;
            }
            else{
                low = mid+1;
            } 
        }
        return low;
    }
};
int main(){
    int n;
    cin >> n;
    vector<int> piles(n);
    for (int i = 0; i < n; i++) {
            cin >> piles[i];
    }
    int h;
    cin >> h;
    Solution sol;
    int result = sol.minEatingSpeed(piles,h);
    cout << result;
}