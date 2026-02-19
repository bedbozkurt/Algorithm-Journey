import java.util.*;

public class WallsAndGates{
    public static void wallsAndGates(int[][] rooms) {
        Queue<int[]> queue = new LinkedList<>();
        for(int i = 0; i < rooms.length; i++){
            for(int j = 0; j < rooms[0].length; j++){
                if(rooms[i][j] == 0){
                    queue.offer(new int[]{i, j});
                }
            }
        }
        int[][] directions = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };
        while(!queue.isEmpty()){
            int[] current = queue.poll();
            int row = current[0];
            int col = current[1];
            
            int m = rooms.length;
            int n = rooms[0].length;

            for (int[] dir : directions) {
                int newRow = row + dir[0];
                int newCol = col + dir[1];

                if (newRow < 0 || newRow >= m || newCol < 0 || newCol >= n) {
                    continue;
                }
                if(rooms[newRow][newCol] != Integer.MAX_VALUE){
                    continue;
                }
                else{
                    rooms[newRow][newCol] = rooms[row][col] + 1;
                }
                queue.offer(new int[]{newRow, newCol});
            }
            
        }
        
    }
}