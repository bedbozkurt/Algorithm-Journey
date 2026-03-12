#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
       if(s1.size() + s2.size() != s3.size()){
            return false;
        }
        vector<vector<bool>> matrix(s1.size()+1, vector<bool>(s2.size()+1, false));
        matrix[0][0] = true;
        for(int i = 1; i <= s1.size(); i++){
            if(matrix[i-1][0] && s1[i-1] == s3[i-1]){
                matrix[i][0] = true;
            }
        }
        for(int i = 1; i <= s2.size(); i++){
            if(matrix[0 ][i-1] && s2[i-1] == s3[i-1]){
                matrix[0][i] = true;
            }
        }
        for(int i = 1; i <= s1.size(); i++){
            for(int j = 1; j <= s2.size(); j++){
                if(matrix[i-1][j] == true && s3[i + j - 1] == s1[i-1]){
                    matrix[i][j] = true;
                }
                if(matrix[i][j-1] == true && s3[i + j - 1] == s2[j-1]){
                    matrix[i][j] = true;
                }
                
            }
        }
        return matrix[s1.size()][s2.size()]; 
    }
};