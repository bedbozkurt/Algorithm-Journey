import java.util.*;

public class HandofStraights {
    public boolean isNStraightHand(int[] hand, int groupSize) {
        if(hand.length % groupSize != 0){
            return false;
        }
        Arrays.sort(hand);
        HashMap<Integer, Integer> cardCount = new HashMap<>();
        for(int i = 0; i < hand.length; i++){
            if (cardCount.containsKey(hand[i])) {
                cardCount.put(hand[i], cardCount.get(hand[i]) + 1);
            } 
            else {
                cardCount.put(hand[i], 1);
            }
        }
        for(int i = 0; i < hand.length; i++) {
            if (cardCount.get(hand[i]) == 0) {
                continue;
            }
        
            for(int j = 0; j < groupSize; j++) {
                int targetCard = hand[i] + j; 
                if (!cardCount.containsKey(targetCard) || cardCount.get(targetCard) == 0) {
                    return false; 
                }
                
                int targetCardTotal = cardCount.get(targetCard);
                cardCount.put(targetCard, targetCardTotal - 1);
            }
        }
        return true;
    }
}
