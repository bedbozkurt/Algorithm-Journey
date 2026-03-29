public class ValidSudoku {
    public boolean isValidSudoku(char[][] board) {
        boolean[][] rows = new boolean[9][9];
        boolean[][] cols = new boolean[9][9];
        boolean[][] boxes = new boolean[9][9];

        for(int i = 0; i < board.length; i++){
            for(int j = 0; j < board[0].length; j++){
                char currentCh = board[i][j];
                if(currentCh == '.'){
                    continue;
                }
                int index = currentCh - '1';
                if (rows[i][index]) {
                    return false; 
                }
                rows[i][index] = true;
                if (cols[j][index]) {
                    return false; 
                }
                cols[j][index] = true;
                int boxIndex = (i/3)*3+(j/3);
                if (boxes[boxIndex][index]) {
                    return false; 
                }
                boxes[boxIndex][index] = true;
            }
        }
        return true;
    }
}
