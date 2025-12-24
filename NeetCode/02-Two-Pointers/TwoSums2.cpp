#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size()-1;
        int currentsum = 0; 
        while(left<right){
            currentsum = numbers[left]+numbers[right];
            if(currentsum == target){
                return {left+1,right+1};
            }
            else if(currentsum > target){
                right--;
            }
            else if(currentsum < target){
                left++;
            }
        }
        return{};
    }
};
int main(){
    Solution sol;
    vector<int> numbers;
    int n;
    cin >> n;
    int temp;
    for(int i = 0; i<n; i++){
       cin >> temp;
       numbers.push_back(temp);
    }
    int target;
    cin >> target;
    vector<int> result = sol.twoSum(numbers,target);
    for(int x : result){
        cout << x << " ";
    }
    return 0;
}