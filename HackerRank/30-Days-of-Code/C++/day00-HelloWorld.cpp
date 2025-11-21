#include <iostream>
#include <string>
using namespace std;
//Question link:https://www.hackerrank.com/challenges/30-hello-world/problem?isFullScreen=true

int main() {
    string input_string;
    getline(cin,input_string);
    cout << "Hello, World." << endl;
    cout << input_string << endl;
       
    return 0;
    //Sample output
    /*Hello, World. 
    Welcome to 30 Days of Code!*/
}
