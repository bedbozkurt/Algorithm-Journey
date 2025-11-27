#include <iostream>
#include <string>
using namespace std;

//Question Link : https://www.hackerrank.com/challenges/30-arrays/problem?isFullScreen=true

int main()
{
    int l;
    cin >> l;
    int* N=new int[l];
    
        for(int i=0;i<l;i++){
            cin>>N[i];
        }
        
        for(int j=l-1;j>=0;j--){
           cout << N[j] << " ";
        }
    
    delete[] N;

    return 0;
}


