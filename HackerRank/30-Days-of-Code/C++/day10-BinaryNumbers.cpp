#include <iostream>
using namespace std;


// Question Link: https://www.hackerrank.com/challenges/30-binary-numbers/problem?isFullScreen=true
int main(){
    int n;
    cin>>n;
    
    int count =0;
    int maxcount=0;
    while(n>0){
        int reminder=n%2;
        if(reminder==1){
            count++;
            if(count>maxcount){
                maxcount=count;
            }
        }
        else{
            count=0;
        }
        n=n/2;
    }
    cout << maxcount;
    
    return 0;
}