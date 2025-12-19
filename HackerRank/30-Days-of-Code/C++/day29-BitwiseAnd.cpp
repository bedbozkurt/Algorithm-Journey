#include <iostream>

using namespace std;

// Question Link : https://www.hackerrank.com/challenges/30-bitwise-and/problem?isFullScreen=true

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n, k;
        cin >> n >> k;

        int maxVal = 0;

        for (int i = 1; i < n; i++) {
            for (int j = i + 1; j <= n; j++) {
                int currentAnd = i & j;

                if (currentAnd < k && currentAnd > maxVal) {
                    maxVal = currentAnd;
                }
            }
        }
        cout << maxVal << endl;
    }
    return 0;
}