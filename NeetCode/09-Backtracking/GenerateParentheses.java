import java.util.ArrayList;
import java.util.List;

public class GenerateParentheses {
    public List<String> generateParenthesis(int n) {
       List<String> resultList = new ArrayList<>();
       String currentString = "";
       backtrack(resultList,currentString,0,0,n);
       return resultList; 
    }
    private void backtrack(List<String> resultList, String currentString, int open, int close, int n){
        if(currentString.length() == 2*n){
            resultList.add(currentString);
            return;
        }
        if(open < n){
            backtrack(resultList, currentString + "(", open + 1, close, n);
        }
        if(close < open){
            backtrack(resultList, currentString + ")", open, close + 1, n);
        }
    } 
}
