#include <iostream>
#include <cmath>

using namespace std;
//Question Link : https://www.hackerrank.com/challenges/30-operators/problem?isFullScreen=true

void solve(double meal_cost, int tip_percent, int tax_percent){
    
    double tip= meal_cost * tip_percent / 100;
    double tax= meal_cost * tax_percent / 100;
    
    double total=meal_cost+tax+tip;
    
    cout << round(total) << endl;
}


int main()
{
    double meal_cost; 
    int tip_percent, tax_percent;
    cin>> meal_cost;
    cin>> tip_percent;
    cin>> tax_percent;
    solve(meal_cost, tip_percent, tax_percent);
   
    return 0;
}