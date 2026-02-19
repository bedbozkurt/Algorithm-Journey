#include <queue>
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
class Solution{
    public:
    void wallsAndGates(vector<vector<int>>& rooms) {
        queue<pair<int, int>> q;
        for(int i = 0; i < rooms.size(); i++){
            for(int j = 0; j < rooms[0].size(); j++){
                if(rooms[i][j] == 0){
                    q.push({i, j});
                }
            }
        }
        vector<vector<int>> directions = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };
        int m = rooms.size();
        int n = rooms[0].size();

        while(!q.empty()){
            pair<int, int> current = q.front();
            q.pop();
            int row = current.first;
            int col = current.second;

            for (auto dir : directions) {
                int newRow = row + dir[0];
                int newCol = col + dir[1];

                if (newRow < 0 || newRow >= m || newCol < 0 || newCol >= n) {
                    continue;
                }
                if(rooms[newRow][newCol] != INT_MAX){
                    continue;
                }
                else{
                    rooms[newRow][newCol] = rooms[row][col] + 1;
                }
                q.push({newRow, newCol});
            }
            
        }
        
    }
};