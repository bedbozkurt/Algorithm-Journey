#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// Question Link : https://www.hackerrank.com/challenges/30-running-time-and-complexity/problem?isFullScreen=true

bool isPrime(int n);

int main() {
    int T;
    cin >> T;
    for(int i = 0; i < T; i++){
            int n;
            cin>>n;
            if (isPrime(n)) {
                cout << "Prime" << endl;
            } else {
                cout << "Not prime" << endl;
            }
        }
    return 0;
}
bool isPrime(int n){
        if (n <= 1) {
            return false;
        }
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                return false; 
            }
        }
        return true; 
    }
