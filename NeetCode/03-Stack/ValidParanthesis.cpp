#include <iostream>
#include <stack>
#include <string>
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            char c = s[i];
            if(c == '{' || c == '[' || c == '('){
                st.push(c);
            }
            else{
                if(st.empty()){
                    return false;
                }
                char top = st.top();
                st.pop();
                if(c == '}' && !(top == '{')){
                    return false;
                }
                else if(c == ')' && !(top == '(')){
                    return false;
                }
                else if(c == ']' && !(top == '[')){
                    return false;
                }
                

            }
           
        }
        return st.empty();
    }
};
int main{
    string s;
    cin >> s;
    Solution sol;
    cout << sol.isValid(s);
}