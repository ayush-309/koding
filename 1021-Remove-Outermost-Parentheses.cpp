class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "";
    int openCount = 0;

    for (char c : s) {
        if (c == '(') {
            if (openCount > 0) { // Only add if it's not an outermost '('
                result += c;
            }
            openCount++;
        } else if (c == ')') {
            openCount--;
            if (openCount > 0) { // Only add if it's not an outermost ')'
                result += c;
            }
        }
    }

    return result;
    }
};