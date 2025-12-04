#include <iostream>
#include <cmath>
using namespace std;

// Question Link : https://www.hackerrank.com/challenges/30-scope/problem?isFullScreen=true

class Difference{
    private: int* elements;
    int size;
    public: int maximumDifference;
    
    Difference(int* elements,int size){
        this->elements=elements;
        this->size=size;
    }
    void computeDifference(){
        int min = elements[0];
        int max = elements[0];
        for(int i=0;i<size;i++){
            if(elements[i]<min){
                min=elements[i];
            }
            if(elements[i] > max){
                max = elements[i];
            }
        }
        
        maximumDifference = abs(max-min);
        
    }
};

int main() {
    int N;
    cin>>N;
    int* a=new int[N];
    
    for(int i=0;i<N;i++){
        cin >> a[i];
    }
    Difference* difference = new Difference(a,N);
    difference->computeDifference();
    
    cout << difference->maximumDifference;
    
    delete [] a; 
    delete difference;
    return 0;
}
