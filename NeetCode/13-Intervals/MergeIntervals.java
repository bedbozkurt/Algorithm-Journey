import java.util.*;

public class MergeIntervals {
    public int[][] merge(int[][] intervals) {
        
        Arrays.sort(intervals, (a, b) -> a[0] - b[0]);
        List<int[]> result = new ArrayList<>();
        result.add(intervals[0]);
        for(int i = 1; i < intervals.length; i++){
            int[] getLast = result.get(result.size() - 1);
            if(intervals[i][0] <= getLast[1]){
                getLast[1] = Math.max(intervals[i][1], getLast[1]);
            }
            else{
                result.add(intervals[i]);
            }
        }
        return result.toArray(new int[result.size()][]);
    }
}
