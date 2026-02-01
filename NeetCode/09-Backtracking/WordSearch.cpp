#include <vector>
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        for(int i = 0;i < board.size();i++){
        for(int j = 0;j < board[0].size(); j++){
            if(helper(board, i, j, word, 0) == true){
                return true;
            }
        }
       }
       return false; 
    }
    bool helper(vector<vector<char>>& board, int i, int j, string word, int index){
        if(index == word.size()){
            return true;
        }
        if(i < 0 || j < 0 || i >= board.size() || j >= board[0].size() || board[i][j] != word[index]){
            return false;
        }
        char temp = board[i][j];
        board[i][j] = ' ';
        bool found = helper(board, i+1, j, word, index + 1) || helper(board, i-1, j, word, index + 1) || 
        helper(board, i, j+1, word, index + 1) || helper(board, i, j-1, word, index + 1);     
        
        board[i][j] = temp;
        
        return found;
    }
};