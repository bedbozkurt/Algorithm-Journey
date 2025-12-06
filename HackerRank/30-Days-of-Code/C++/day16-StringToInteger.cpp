#include <iostream>
#include <string>
#include <exception>
using namespace std;

// Question Link : https://www.hackerrank.com/challenges/30-exceptions-string-to-integer/problem

int main()
{
    string S;
    getline(cin, S);
    
    try{
        int stringToInt =stoi(S);
        cout << stringToInt;
    }
    catch(exception e){
        cout << "Bad String";
    }

    return 0;
}
