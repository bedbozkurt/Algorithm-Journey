public class CoinChangeII {
    public int change(int amount, int[] coins) {
        int[] combination = new int[amount + 1];
        combination[0] = 1;
        for(int i = 0; i < coins.length; i++){
            for(int j = coins[i]; j <= amount; j++){
                combination[j] = combination[j] + combination[j-coins[i]]; 
            }
        }
        return combination[amount];
    }
}
