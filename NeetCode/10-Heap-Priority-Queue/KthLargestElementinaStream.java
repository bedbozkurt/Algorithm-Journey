import java.util.*;
public class KthLargestElementinaStream {
    PriorityQueue<Integer> heap;
    int k;
    public KthLargestElementinaStream(int k, int[] nums) {
       this.k = k;
       this.heap = new PriorityQueue<>();
       for(int i = 0; i<nums.length; i++){
        add(nums[i]);
       }
    }
    
    public int add(int val) {
        heap.offer(val);
        if(heap.size() > k){
            heap.poll();
        }
        return heap.peek();
    }
}
