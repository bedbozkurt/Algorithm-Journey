import java.util.*;

public class LetterCombinationsofaPhoneNumber {
    class Solution {
    String[] letters = {
        "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
    };
    public List<String> letterCombinations(String digits) {
      List<String> result = new ArrayList<>();
      if(digits.length() == 0){
        return result;
      }
      helper(0, digits, "", result);
      return result;      
    }
    void helper(int index, String digits, String currentString, List<String> result){
        if(index == digits.length()){
            result.add(currentString);
            return;
        }
        int num = digits.charAt(index) - '0';
        String newLetters = letters[num];
        for(char newLetter : newLetters.toCharArray()){
            helper(index + 1, digits, currentString + newLetter, result);
        }

    }
}
}
