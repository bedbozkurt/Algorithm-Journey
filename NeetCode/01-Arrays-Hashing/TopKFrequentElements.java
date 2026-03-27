import java.util.*;

public class TopKFrequentElements {
    public int[] topKFrequent(int[] nums, int k) {
        Map<Integer, Integer> numsMap = new HashMap<>(); 
        int[] result = new int[k];
        for(int i = 0; i < nums.length; i++){
            
            if (numsMap.containsKey(nums[i])){
                numsMap.put(nums[i], numsMap.get(nums[i]) + 1);
            }
            else{
               numsMap.put(nums[i], 1); 
            }
        }
        
        for(int i = 0; i < k; i++){
            int maxFreq = -1;
            int mostFrequentKey = -1;
            for (int key : numsMap.keySet()) {
                int currentFreq = numsMap.get(key);
                if (currentFreq > maxFreq) {
                    maxFreq = currentFreq; 
                    mostFrequentKey = key;  
                }
            }
            result[i] = mostFrequentKey;
            numsMap.remove(mostFrequentKey);
        }
        return result;
    }
}
