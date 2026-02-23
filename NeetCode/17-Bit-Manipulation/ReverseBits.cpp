class Solution {
public:
    int reverseBits(int n) {
        unsigned int result = 0;
        unsigned int un = n;
        for(int i = 0; i < 32; i++){
            int temp = un & 1;
            result = result << 1;
            result = result | temp;
            un = un >> 1;
        }
        return result;
    }
    
};