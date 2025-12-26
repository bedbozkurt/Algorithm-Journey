#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(string s : strs){
            string key = s; 
            sort(key.begin(), key.end());
            mp[key].push_back(s);
        }
        vector<vector<string>> result;
        for(auto x : mp){
         result.push_back(x.second);
        }
        return result;
    }
};
int main(){
    int n;
    cin >> n;
    vector<string> strs;
    for(int i =0; i<n;i++){
        string temp;
        cin >> temp;
        strs.push_back(temp);
    }
    Solution sol;
    vector<vector<string>> answer = sol.groupAnagrams(strs);
    for(auto group : answer){
        cout << "[ ";
        for(auto word : group){
            cout << word << " ";
        }
        cout << "]" << endl;
    }
    return 0;
}