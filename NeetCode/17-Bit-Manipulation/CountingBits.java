public class CountingBits {
    public int[] countBits(int n) {
        int[] result = new int[n+1]; 
        
        for(int i = 0; i <= n; i++){
            int temp = i;
            int count = 0;
            while(temp > 0){
                if(temp % 2 == 1){
                    count++;
                }
                temp/=2;
            }
            result[i] = count;
        }
        return result;
    }
}
