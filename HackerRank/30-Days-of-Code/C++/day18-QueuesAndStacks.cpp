#include <iostream>
#include <stack> 
#include <queue> 
using namespace std;

// Question Link : https://www.hackerrank.com/challenges/30-queues-stacks/problem?isFullScreen=true

class Solution {
    private:
    stack<char> s;
    queue<char> q;
    
    public:
    void pushCharacter(char ch){
        s.push(ch);
    }
    
     void enqueueCharacter(char ch){
        q.push(ch);
    }
     char popCharacter(){
        char topChar = s.top(); 
        s.pop(); 
        return topChar;
    }
     char dequeueCharacter(){
        char frontChar = q.front();
        q.pop();
        return frontChar;
    }

};

int main() {
    string s;
    getline(cin, s);
    
    Solution obj;
    
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}