import java.util.ArrayList;
import java.util.List;

public class Permutations {
    public List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> result = new ArrayList<>();
        boolean[] used = new boolean[nums.length];
        backtrack(nums, new ArrayList<>(), result, used);
        return result;
    }
    private void backtrack(int[] nums, List<Integer> currentList, List<List<Integer>> result, boolean[] used){
        if(currentList.size() == nums.length){
            result.add(new ArrayList<>(currentList));
            return;
        }
        
        for(int i = 0;i<nums.length;i++){
            if(used[i] == true){
                continue;
            }
            used[i] = true;
            currentList.add(nums[i]);
            backtrack(nums, currentList, result, used);
            currentList.remove(currentList.size()-1);
            used[i] = false;
        }
    }
}
