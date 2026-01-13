import java.util.*;
class BestTimetoBuyandSellStock {
    public static int maxProfit(int[] prices) {
    int minPrice = Integer.MAX_VALUE;
    int maxProfit = 0;
    for(int i=0; i<prices.length; i++) {
        if(prices[i]<minPrice) {
        minPrice=prices[i];
        }
        else if(prices[i]-minPrice > maxProfit) {
        maxProfit=prices[i]-minPrice;
    }
    }
        

    return maxProfit;
    }
public static void main(String[] args) {
    Scanner scan = new Scanner(System.in);
    int n = scan.nextInt();
    int[] prices = new int[n];
    for(int i=0; i<n; i++) {
    prices[i]=scan.nextInt();
    }
    System.out.println(maxProfit(prices));
    scan.close();
}
}
