import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class SubsetsII {
    public List<List<Integer>> subsetsWithDup(int[] nums) {
        Arrays.sort(nums);
        List<List<Integer>> result = new ArrayList<>();
        backtrack(0,new ArrayList<>(), result, nums);
        return result;
    }
    private void backtrack(int start, List<Integer> temp, List<List<Integer>> result, int[] nums){
        result.add(new ArrayList<>(temp));
        for(int i = start; i < nums.length; i++){
            if(i>start && nums[i] == nums[i-1]){
                continue;
            }
            temp.add(nums[i]);
            backtrack(i+1,temp,result,nums);
            temp.remove(temp.size()-1);
        } 
    }
}
