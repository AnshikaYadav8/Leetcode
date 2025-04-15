class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        unordered_map<char, char> mapping = {{')', '('}, {']', '['}, {'}', '{'}};
        
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                stk.push(c); 
            } else if (c == ')' || c == ']' || c == '}') {
                if (stk.empty() || stk.top() != mapping[c]) {
                    return false; 
                }
                stk.pop(); 
            }
        }
        return stk.empty(); 
    }
};