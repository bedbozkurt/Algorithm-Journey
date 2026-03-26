public class ValidParenthesisString {
    public boolean checkValidString(String s) {
        int minLeft = 0;
        int maxLeft = 0;
        for(int i = 0; i < s.length(); i++){
            if(s.charAt(i) == '('){
                minLeft++;
                maxLeft++;
            }
            else if(s.charAt(i) == ')'){
                minLeft--;
                maxLeft--;
            }
            else if(s.charAt(i) == '*'){
                minLeft--;
                maxLeft++;
            }
            if(maxLeft < 0){
                return false;
            }
            if(minLeft < 0){
                minLeft = 0;
            }
        }
        if(minLeft == 0){
            return true;
        }
        return false;
    }
}
