import java.util.*;
class Solution {
    public static boolean isValid(String s) {
        Stack<Character> stack = new Stack<>();
        for(int i=0;i<s.length();i++){
            char c = s.charAt(i);
            if(c == '{' || c == '[' || c == '('){
                stack.push(c);
            }
            else{
                if(stack.isEmpty()){
                    return false;
                }
                char top = stack.pop();
                if(c == '}' && !(top == '{')){
                    return false;
                }
                else if(c == ')' && !(top == '(')){
                    return false;
                }
                else if(c == ']' && !(top == '[')){
                    return false;
                }
                

            }
           
        }
        return stack.isEmpty();
    }
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        System.out.println(isValid(s));
        scan.close();
    }
}