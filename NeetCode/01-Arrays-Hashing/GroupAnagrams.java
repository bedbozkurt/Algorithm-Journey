import java.util.*;
public class GroupAnagrams {
    public static List<List<String>> groupAnagrams(String[] strs) {
        Map <String, List<String>> map = new HashMap<>();
        
        for(String s : strs){
        char[] strsArray = s.toCharArray(); 
        Arrays.sort(strsArray);
        
        String key = new String(strsArray);
        if(!map.containsKey(key)){
            map.put(key, new ArrayList<>());
        }
        map.get(key).add(s);
        }

        return new ArrayList<>(map.values());
    }
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        String[] strs = new String[n];
        for(int i = 0; i<n; i++){
            strs[i] = scan.next();
        }
        List<List<String>> answer = groupAnagrams(strs);
        System.out.println(answer);
        scan.close();
    }
}