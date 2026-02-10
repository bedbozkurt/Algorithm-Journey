public class DecodeWays {
   public int numDecodings(String s) {
        char[] sArray = s.toCharArray();
        int[] dp = new int[s.length() + 1];
        dp[0] = 1;
        if(sArray[0] == '0'){
            return 0;
        }
        else{
            dp[1] = 1;
        }
        for(int i = 2; i < dp.length; i++){
            if(sArray[i - 1] != '0'){
                dp[i] += dp[i-1];
            }
            int ten = (sArray[i-2] - '0') * 10;
            int unit = (sArray[i-1] - '0');
            int doubleDigit = ten + unit;
            if(doubleDigit <= 26 && doubleDigit >= 10){
                dp[i] += dp[i-2];
            }
        }
        return dp[dp.length - 1];
    } 
}
