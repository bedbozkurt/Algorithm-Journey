public class PalindromicSubstrings {
    int count = 0;
    public int countSubstrings(String s) {
        char[] sArray = s.toCharArray();
        for(int i = 0; i< sArray.length; i++){
            helper(sArray, i, i);
            helper(sArray, i, i + 1);
        }
        return count; 
    }
    private void helper(char[] sArray, int left, int right){
        while(left >= 0 && right < sArray.length && sArray[left] == sArray[right]){
            left--;
            right++;
            count++;    
        }
    }
}
