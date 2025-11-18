class Solution {
public:
    void solve(string s, int o, int c, vector<string>& ans) {
        if (o == 0 && c == 0) {
            ans.push_back(s);
            return;
        }
        if (o == c) {
            solve(s + "(", o - 1, c, ans);
            return;
        }
        if (o == 0) {
            solve(s + ")", o, c - 1, ans);
            return;
        }
        solve(s + "(", o - 1, c, ans);
        solve(s + ")", o, c - 1, ans);
        return;
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        solve("", n, n, ans);
        return ans;
    }
};