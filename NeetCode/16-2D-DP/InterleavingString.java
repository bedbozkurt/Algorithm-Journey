public class InterleavingString {
    public boolean isInterleave(String s1, String s2, String s3) {
        if(s1.length() + s2.length() != s3.length()){
            return false;
        }
        boolean[][] matrix = new boolean[s1.length()+1][s2.length()+1];
        matrix[0][0] = true;
        for(int i = 1; i <= s1.length(); i++){
            if(matrix[i-1][0] == true && s1.charAt(i-1) == s3.charAt(i-1)){
                matrix[i][0] = true;
            }
        }
        for(int i = 1; i <= s2.length(); i++){
            if(matrix[0 ][i-1] && s2.charAt(i-1) == s3.charAt(i-1)){
                matrix[0][i] = true;
            }
        }
        for(int i = 1; i <= s1.length(); i++){
            for(int j = 1; j <= s2.length(); j++){
                if(matrix[i-1][j] && s3.charAt(i + j - 1) == s1.charAt(i-1)){
                    matrix[i][j] = true;
                }
                if(matrix[i][j-1] == true && s3.charAt(i + j - 1) == s2.charAt(j-1)){
                    matrix[i][j] = true;
                }
                
            }
        }
        return matrix[s1.length()][s2.length()];
    }
}
