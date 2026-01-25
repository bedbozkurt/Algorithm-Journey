import java.util.*;
class Solution {
    public int lastStoneWeight(int[] stones) {
        PriorityQueue<Integer> heap = new PriorityQueue<>(Collections.reverseOrder());
        for(int stone : stones){
            heap.offer(stone);
        }
        while(heap.size() > 1){
            int heavy = heap.poll();
            int secondHeavy = heap.poll();
            if(heavy != secondHeavy){
                heap.offer(heavy-secondHeavy);
            } 
        }
        if(heap.isEmpty()){
            return 0;
        }
        return heap.poll();
    }
}