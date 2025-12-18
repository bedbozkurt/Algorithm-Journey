#include <iostream>
#include <vector>     
#include <algorithm>  
#include <regex>      

// Question Link : https://www.hackerrank.com/challenges/30-regex-patterns/problem?isFullScreen=true

using namespace std;

int main() {
    int N;
    cin >> N; 

    vector<string> gmailUsers;
    regex r(".+@gmail\\.com$");

    for(int i = 0; i < N; i++) {
        string firstName;
        string emailID;
        
        cin >> firstName >> emailID;

        if(regex_match(emailID, r)) {
            gmailUsers.push_back(firstName);
        }
    }

    sort(gmailUsers.begin(), gmailUsers.end());

    for(const string& name : gmailUsers) {
        cout << name << endl;
    }

    return 0;
}