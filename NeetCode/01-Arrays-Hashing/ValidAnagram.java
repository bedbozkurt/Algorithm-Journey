class Solution {
    public boolean isAnagram(String s, String t) {
        if (s.length() != t.length()) {
            return false;
        }
        char[] sArray = s.toCharArray();
        char[] tArray = t.toCharArray();

        Arrays.sort(sArray);
        Arrays.sort(tArray);

        return Arrays.equals(sArray, tArray);
    }
}
class Answer{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        
        String s = scan.nextLine();
        String t = scan.nextLine();

        Solution solution = new Solution();
        solution.isAnagram(s,t);
        
        scan.close();
    }
}