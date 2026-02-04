class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2){
            return n;
        } 
        int prev = 2;
        int secondPrev = 1;
        int current = 0;

        for(int i = 3; i <= n; i++){
            current = prev + secondPrev;
            secondPrev = prev;
            prev = current;

        }
        
        return prev;
    }
};