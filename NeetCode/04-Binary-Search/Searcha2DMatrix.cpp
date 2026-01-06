#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low = 0;
        int high = matrix.size() * matrix[0].size()-1;
        
        while(low<=high){
            int mid = low + (high-low)/2;
            int row = mid/matrix[0].size();
            int col = mid%matrix[0].size();
            int value = matrix[row][col];
            if(value==target){
                return true;
            }
            else if(value<target){
                low = mid+1;
            }
            else{
                high = mid -1;
            }
        }
        return false;
    }
};
int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }
    int target;
    cin >> target;
    Solution sol;
    bool result = sol.searchMatrix(matrix,target);
    cout << result;
}