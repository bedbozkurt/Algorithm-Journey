public class PlusOne {
    public int[] plusOne(int[] digits) {
        for(int i = digits.length - 1; i >= 0; i--){
            if(digits[i] < 9){
                digits[i] += 1;
                return digits;
            }
            if(digits[i] == 9){
                digits[i] = 0;
            }
        }
        int[] extremeCase = new int[digits.length + 1];

        extremeCase[0] = 1;

        return extremeCase;

    }
}
