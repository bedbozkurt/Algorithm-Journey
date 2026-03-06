import java.util.*;

public class DetectSquares {
    List<int[]> pointList;
    Map<String, Integer> pointMap;

    public DetectSquares() {
        pointList = new ArrayList<>();
        pointMap = new HashMap<>();
    }
    
    public void add(int[] point) {
        pointList.add(point);
        String key = point[0] + "," + point[1];
        if(pointMap.containsKey(key)){
            pointMap.put(key, pointMap.get(key) + 1);
        }
        else{
            pointMap.put(key, 1);
        }
        
    }
    
    public int count(int[] point) {
        int totalSquare = 0;
        int x = point[0];
        int y = point[1];
        for (int[] p : pointList){
            int x2 = p[0];
            int y2 = p[1];
            if((Math.abs(x - x2) == Math.abs(y - y2)) && (x != x2)){
                String key1 = x + "," + y2;
                String key2 = x2 + "," + y;
                if(pointMap.containsKey(key1) && pointMap.containsKey(key2)){
                    int count1 = pointMap.get(key1);
                    int count2 = pointMap.get(key2);
                    totalSquare += count1 * count2;
                } 
            }
              
        }
        return totalSquare;
    }
}
