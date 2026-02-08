public class LongestPalindromicSubstring {
    public String longestPalindrome(String s) {
        if (s == null){
            return "";
        } 
        int start = 0;
        int maxLen = 0;
        char[] sArray = s.toCharArray();
        for(int i = 0; i < sArray.length; i++){
                int len1 = helper(sArray, i, i);
                int len2 = helper(sArray, i + 1, i);
                int len = Math.max(len1, len2);
                if(len > maxLen){
                    maxLen = len;
                    start = i- (len-1)/2;
                }
        }
        return s.substring(start, start + maxLen);

    }
    private int helper(char[] sArray, int right, int left){
        
        while(left >= 0 && right < sArray.length && sArray[left] == sArray[right]){
            left--;
            right++;
        }
        return right - left - 1;
    }
}
