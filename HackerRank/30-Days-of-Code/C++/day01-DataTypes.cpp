#include <iomanip>
#include <iostream>
using namespace std;

//Question Link : https://www.hackerrank.com/challenges/30-data-types/problem?isFullScreen=true
int main() {
    int i=4;
    double d=4.0;
    string s="HackerRank ";
    int i2;
    double d2;
    string s2;
    string s3;
    cin>>i2;
    cin>>d2;
    getline(cin,s2);
    getline(cin,s3);
    double d3=d+d2;
    cout<<i+i2<<endl;
    cout<<fixed<<setprecision(1)<<d3<<endl;
    cout<<s+s3;  
    return 0;
}