#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        int left = 0;
        int right = height.size()-1;
        while(left < right){
            int tempArea = (right - left) * min(height[left], height[right]);
            if(tempArea > maxArea){
                maxArea = tempArea;
            }
            if(height[left] < height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxArea;
    }
    
};
int main(){
    Solution sol;
    vector<int> height;
    int n;
    cin >> n;
    int temp;
    for(int i = 0; i<n; i++){
       cin >> temp;
       height.push_back(temp);
    }
    
    int result = sol.maxArea(height); 
    cout << result << endl;
    return 0;
}