#include <iostream>
#include <string>
#include <map>
using namespace std;

// Question Link : https://www.hackerrank.com/challenges/30-dictionaries-and-maps/problem?isFullScreen=true
int main() {
    string name;
    int phone;
    int n;
    cin>>n;
    map<string, int> phoneBook;
    for(int i=0;i<n;i++){
        cin>>name;
        cin>>phone;
        phoneBook[name]=phone;
    }
    while(cin>>name){
        if(phoneBook.find(name) !=phoneBook.end()){
            cout <<name << "=" << phoneBook[name] << endl;
        }
        else {
            cout << "Not found" << endl;
        }
    }
    return 0;
}
