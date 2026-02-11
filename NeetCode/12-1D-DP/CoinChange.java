public class CoinChange {
    class Solution {
    public int coinChange(int[] coins, int amount) {
        int[] arr = new int[amount + 1];
        for(int i = 0; i < arr.length; i++){
            arr[i] = amount + 1;
        }
        arr[0] = 0;
        for(int i = 1; i < arr.length; i++){
            for(int coin : coins){
                if(coin <= i){
                    arr[i] = Math.min(arr[i], arr[i - coin] + 1);
                }
            }
        }
        if(arr[amount] == amount + 1){
            return -1;
        }
        return arr[amount];
    }
}
}
