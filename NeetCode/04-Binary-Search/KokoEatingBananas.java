import java.util.*;
class KokoEatingBananas {
    public static int minEatingSpeed(int[] piles, int h) {
        int low = 1;
        int high = 0;
        for (int pile : piles) {
        high = Math.max(high, pile);
        }
        while(low < high){
            int mid = low + (high - low) / 2;
            long totalhours = 0;
            for(int i = 0;i<piles.length;i++){
                int hours = (piles[i] + mid - 1) / mid;
                totalhours +=hours;
            }
            
            if(totalhours <= h){
                high = mid;
            }
            else{
                low = mid+1;
            } 
        }
        return low;
    }
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[] piles = new int[n];
        for(int i = 0; i < n; i++){
            piles[i] = scan.nextInt();
        }
        int h = scan.nextInt();
        System.out.println(minEatingSpeed(piles,h));
        scan.close();
    }
}