import java.util.Scanner;

//Question link:https://www.hackerrank.com/challenges/30-hello-world/problem?isFullScreen=true

public class day00HelloWorld {
	public static void main(String[] args) {
        
		Scanner scan = new Scanner(System.in); 
		
		
		String inputString = scan.nextLine(); 


		scan.close(); 
      
		
		System.out.println("Hello, World.");
        System.out.println(inputString);
        /*Sample output
        Hello, World. 
        Welcome to 30 Days of Code!*/
	}
}