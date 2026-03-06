#include <vector>
#include <string>
#include <unordered_map>
#include <cmath>

using namespace std;

class DetectSquares {
public:
    vector<vector<int>> pointList;
    unordered_map<string, int> pointMap;

    DetectSquares() {
        
    }
    
    void add(vector<int> point) {
        pointList.push_back(point);
        string key = to_string(point[0]) + "," + to_string(point[1]);
        pointMap[key]++;
    }
    
    int count(vector<int> point) {
        int totalSquare = 0;
        int x = point[0];
        int y = point[1];
        for (vector<int>& p : pointList){
            int x2 = p[0];
            int y2 = p[1];
            if((abs(x - x2) == abs(y - y2)) && (x != x2)){
                string key1 = to_string(x) + "," + to_string(y2);
                string key2 = to_string(x2) + "," + to_string(y);
                if(pointMap.count(key1) > 0 && pointMap.count(key2) > 0){
                    int count1 = pointMap[key1];
                    int count2 = pointMap[key2];
                    totalSquare += count1 * count2;
                } 
            }
              
        }
        return totalSquare;
    }
};

