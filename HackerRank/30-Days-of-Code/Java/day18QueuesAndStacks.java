import java.io.*;
import java.util.*;


// Question Link : https://www.hackerrank.com/challenges/30-queues-stacks/problem?isFullScreen=true

public class day18QueuesAndStacks {
    LinkedList<Character> queue;
    Stack<Character> stacky = new Stack<>();
    
    public Solution(){
        queue = new LinkedList<>();
    }
    public void pushCharacter(char ch){
        stacky.push(ch);
    }
    
    public void enqueueCharacter(char ch){
        queue.addLast(ch);
    }
    public char popCharacter(){
        return stacky.pop();
    }
    public char dequeueCharacter(){
        return queue.remove(0);
    }
    
    
    
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String input = scan.nextLine();
        scan.close();

        
        char[] s = input.toCharArray();

        
        Solution p = new Solution();

        
        for (char c : s) {
            p.pushCharacter(c);
            p.enqueueCharacter(c);
        }

        
        boolean isPalindrome = true;
        for (int i = 0; i < s.length/2; i++) {
            if (p.popCharacter() != p.dequeueCharacter()) {
                isPalindrome = false;                
                break;
            }
        }

        
        System.out.println( "The word, " + input + ", is " 
                           + ( (!isPalindrome) ? "not a palindrome." : "a palindrome." ) );
    }
}