import java.util.*;

public class PalindromePartitioning {
    public List<List<String>> partition(String s) {
        List<List<String>> result = new ArrayList<>();
        backtracking(0, new ArrayList<>(), result, s);
        return result;
    }
    private void backtracking(int index, List<String> currentList, List<List<String>> result, String s){
        if(index == s.length()){
            result.add(new ArrayList<>(currentList));
        }
        for(int i = index; i < s.length(); i++){
            String temp = s.substring(index, i + 1);
            if(isPalindrome(temp)){
                currentList.add(temp);
                backtracking(i+1, currentList, result, s);
                currentList.remove(currentList.size() - 1);
            }
        }
    }
    private boolean isPalindrome(String s){
        int left = 0;
        int right = s.length() - 1;
    
        while(left < right){
            if(s.charAt(left) != s.charAt(right)){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
}
