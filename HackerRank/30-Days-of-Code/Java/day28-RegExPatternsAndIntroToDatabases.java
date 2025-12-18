import java.io.*;
import java.util.*;
import java.util.regex.*; 

// Question Link : https://www.hackerrank.com/challenges/30-regex-patterns/problem?isFullScreen=true

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        int N = scan.nextInt();
        
        List<String> gmail = new ArrayList<>();
        
        String myRegExString = "[a-z]+@gmail\\.com$";
        Pattern p = Pattern.compile(myRegExString);

        for (int i = 0; i < N; i++) {
            String name = scan.next(); 
            String email = scan.next();
               
            Matcher m = p.matcher(email);
            
            if (m.find()) {
                gmail.add(name);
            }
        }
        Collections.sort(gmail);
        for (String name : gmail) {
            System.out.println(name);
        }
        
        scan.close();
    }
}