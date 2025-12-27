import java.util.Scanner;

// Question Link : https://www.hackerrank.com/challenges/30-exceptions-string-to-integer/problem

public class day16StringtoInteger {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String S = scan.nextLine();
        
        try{
            int stringtoInteger = Integer.parseInt(S);
            System.out.println(stringtoInteger);
        }
        catch(Exception e){
            System.out.println("Bad String");
        }
    }
}
