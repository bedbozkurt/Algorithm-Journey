#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool rows[9][9] = {false};
        bool cols[9][9] = {false};
        bool boxes[9][9] = {false};

        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[0].size(); j++){
                char currentCh = board[i][j];
                if(currentCh == '.'){
                    continue;
                }
                int index = currentCh - '1';
                if (rows[i][index]) {
                    return false; 
                }
                rows[i][index] = true;
                if (cols[j][index]) {
                    return false; 
                }
                cols[j][index] = true;
                int boxIndex = (i/3)*3+(j/3);
                if (boxes[boxIndex][index]) {
                    return false; 
                }
                boxes[boxIndex][index] = true;
            }
        }
        return true;
    }
};