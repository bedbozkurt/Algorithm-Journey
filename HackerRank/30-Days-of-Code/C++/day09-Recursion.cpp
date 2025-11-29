#include <iostream>

using namespace std;

    //Question Link : https://www.hackerrank.com/challenges/30-recursion/problem?isFullScreen=true

int factorial(int n) {
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);
}

int main()
{   
    int n;
    cin>>n;
    cout << factorial(n);

    return 0;
}