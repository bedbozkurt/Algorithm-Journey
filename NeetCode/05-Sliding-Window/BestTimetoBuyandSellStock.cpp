#include <iostream> 
#include <vector>   
#include <climits>  

using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int minPrice = INT_MAX;
    int maxProfit = 0;
    for(int i=0; i<prices.size(); i++) {
        if(prices[i]<minPrice) {
        minPrice=prices[i];
        }
        else if(prices[i]-minPrice > maxProfit) {
        maxProfit=prices[i]-minPrice;
        }
    }
    return maxProfit;
    }
    
};
int main(){
    int n;
    cin >> n;
    vector<int> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    Solution sol;
    int result = sol.maxProfit(prices);
    cout << result;
}