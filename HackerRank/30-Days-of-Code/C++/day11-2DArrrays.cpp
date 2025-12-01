#include <iostream>

using namespace std;


// Question Link : https://www.hackerrank.com/challenges/30-2d-arrays/problem?isFullScreen=true

int main()
{

    int arr[6][6];
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            cin>>arr[i][j];
        }
    }
    int maxsum=-999;
    int currentsum;
    for(int k=0;k<4;k++){
        for(int l=0;l<4;l++){
            currentsum=arr[k][l]+arr[k][l+1]+arr[k][l+2]+arr[k+1][l+1]+arr[k+2][l]+arr[k+2][l+1]+arr[k+2][l+2];
            if(currentsum>maxsum){
                maxsum=currentsum;
            }
        }
    }
    cout<<maxsum;

    return 0;
}


