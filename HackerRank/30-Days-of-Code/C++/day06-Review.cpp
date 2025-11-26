#include <iostream>
#include <string>
using namespace std;

 // Question Link : https://www.hackerrank.com/challenges30-review-loop/problem?isFullScreen=true

int main() {
    int T;
    cin >>T;
    int testcase=1;
    do{
        string s;
        cin>>s;
        for(int j=0;j<s.length();j+=2){
            cout << s[j];
        }
        cout << " ";
        for(int i=1;i<s.length();i+=2){
            cout << s[i];
        }
        cout << endl;
        testcase++;
    }while (testcase==T);
    return 0;
}
