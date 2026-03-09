public class BestTimetoBuyandSellStockwithCooldown{
    public int maxProfit(int[] prices) {
        int hold = -prices[0];
        int rest = 0;
        int sold = 0;
        for(int i = 0; i < prices.length; i++){
            int tempHold = hold;
            int tempRest = rest;
            int tempSold = sold;
            hold = Math.max(tempRest-prices[i], tempHold);
            sold = tempHold + prices[i];
            rest = Math.max(tempRest, tempSold);
        }
        return Math.max(sold, rest);
    }
}