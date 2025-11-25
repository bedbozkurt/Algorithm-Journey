#include <iostream>

using namespace std;

// Question Link : https://www.hackerrank.com/challenges/30-loops/problem?isFullScreen=true


int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=10;i++){
        cout << n << " x " << i << " = " << n*i << endl;
    }

    return 0;
}

