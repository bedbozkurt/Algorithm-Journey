#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size() % groupSize != 0){
            return false;
        }
        sort(hand.begin(), hand.end());
        unordered_map<int, int> cardCount;
        for(int i = 0; i < hand.size(); i++){
            if (cardCount.count(hand[i]) > 0) {
                cardCount[hand[i]] = cardCount[hand[i]] + 1;
            } 
            else {
                cardCount[hand[i]] = 1;
            }
        }
        for(int i = 0; i < hand.size(); i++) {
            if (cardCount[hand[i]] == 0) {
                continue;
            }
        
            for(int j = 0; j < groupSize; j++) {
                int targetCard = hand[i] + j; 
                if (cardCount.count(targetCard) <= 0 || cardCount[targetCard] == 0) {
                    return false; 
                }
                
                int targetCardTotal = cardCount[targetCard];
                cardCount[targetCard] = targetCardTotal - 1;
            }
        }
        return true;
    }
};