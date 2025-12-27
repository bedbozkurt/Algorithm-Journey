import java.util.*;
import java.io.*;

//Question Link : https://www.hackerrank.com/challenges/30-dictionaries-and-maps/problem?isFullScreen=true
class day08DictionariesAndMaps {
    public static void main(String []arg) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        
        Map<String, Integer> phoneBook = new HashMap<String, Integer>();
        
        for(int i = 0; i < n; i++){
            String name = scan.next();
            int phone = scan.nextInt();
            phoneBook.put(name, phone);
        }
        while(scan.hasNext()){
            String s = scan.next();
            if(phoneBook.containsKey(s)) {
                System.out.println(s + "=" + phoneBook.get(s));
            } else {
                System.out.println("Not found");
            }
        }
        scan.close();
    }
}