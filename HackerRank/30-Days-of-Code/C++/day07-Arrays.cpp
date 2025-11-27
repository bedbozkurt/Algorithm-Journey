#include <iostream>
#include <string>
using namespace std;

//Question Link : https://www.hackerrank.com/challenges/30-arrays/problem?isFullScreen=true

int main()
{
    
    int l;
    cin>>l;
    cin.ignore();
    string N;
    getline(cin,N);
    l=N.length();

    for(int i=l-1;i>=0;i--){
        cout << N[i];
    }

    

    return 0;
}


