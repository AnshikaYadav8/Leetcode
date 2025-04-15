class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        unordered_map<char, char> mapping = {{')', '('}, {']', '['}, {'}', '{'}};
        
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                stk.push(c); // Push opening parentheses onto stack
            } else if (c == ')' || c == ']' || c == '}') {
                if (stk.empty() || stk.top() != mapping[c]) {
                    return false; // Either the stack is empty or the top doesn't match
                }
                stk.pop(); // Pop the matching opening parenthesis
            }
        }
        
        return stk.empty(); 
    }
};