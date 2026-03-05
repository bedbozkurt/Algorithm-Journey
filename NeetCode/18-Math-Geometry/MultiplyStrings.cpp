#include <vector>
#include <string>
#include <iostream>
using namespace std;
class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1 == "0" || num2 == "0"){
            return "0";
        }
        vector<int> arrayLength(num1.size() + num2.size(), 0);
        for(int i = num1.size() - 1; i >= 0; i--){
            int number1 = num1[i] - '0';
            for(int j = num2.size() - 1; j >= 0; j--){
                int number2 = num2[j] - '0';
                int sum = (number1 * number2) + arrayLength[i+j+1];
                arrayLength[i+j+1] = sum % 10; 
                arrayLength[i+j] += sum / 10;  
            }
        }
        string result = "";
        for(int i = 0; i < arrayLength.size(); i++){
            if(result.empty() && arrayLength[i] == 0){
                continue;
            }
            else{
                result.push_back(arrayLength[i] + '0');
            }
        }
        return result;
    }
};