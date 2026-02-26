public class ReverseInteger {
    public int reverse(int x) {
        int reverseNumber = 0;
        
        while(x != 0){
            if(reverseNumber > Integer.MAX_VALUE / 10){
                return 0;
            }
            if(reverseNumber < Integer.MIN_VALUE / 10){
                return 0;
            }
            
            int lastDigit = x % 10;
            reverseNumber = reverseNumber * 10;
            reverseNumber += lastDigit;
            x = x / 10;
        }
        return reverseNumber;
    }
}
