#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Solution {  
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int, vector<int>> heap; 
        for(int stone : stones){
            heap.push(stone);
        }
        while(heap.size() > 1){
            int heavy = heap.top();
            heap.pop();
            int secondHeavy = heap.top();
            heap.pop();
            if(heavy != secondHeavy){
                heap.push(heavy-secondHeavy);
            } 
        }
        if(heap.empty()){
            return 0;
        }
        return heap.top();
    }
};