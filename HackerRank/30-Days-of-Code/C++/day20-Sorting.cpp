#include <iostream>

using namespace std;

// Question Link : https://www.hackerrank.com/challenges/30-sorting/problem?isFullScreen=true

int main(){
    
    int n;
    cin >> n;
    
    int* a = new int[n];
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    int sumOfSwaps = 0;
    for(int i = 0; i < n; i++){
        int numberOfSwaps = 0;
        
        for(int j = 0; j < n-1; j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                numberOfSwaps++;
                sumOfSwaps++;
            }
        }
        if(numberOfSwaps == 0){
            break;
        }
    }
    
    cout << "Array is sorted in " << sumOfSwaps << " swaps." << endl;
    cout << "First Element: " << a[0] << endl;
    cout << "Last Element: " << a[n-1] << endl;
   
    delete[] a;
   
    return 0;
}