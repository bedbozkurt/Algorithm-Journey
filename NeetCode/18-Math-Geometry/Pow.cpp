class Solution {
public:
    double myPow(double x, int n) {
        long long nn = n;
        double result = 1;
        if(nn < 0){
            x = 1 / x;
            nn -= 2*nn;
        }
        while(nn > 0){
            if(nn %2 == 0){
                x *=x;
                nn = nn / 2;
            }
            else{
                result *=x;
                nn--;
            }
        }
        return result;
        
    }
};