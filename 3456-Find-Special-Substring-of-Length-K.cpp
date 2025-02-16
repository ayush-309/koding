class Solution {
public:
    bool hasSpecialSubstring(string s, int k) {
        if (k > s.length())
            return false;
        for (int i = 0; i <= s.length() - k; i++) {
            bool valid = true;
            for (int j = 0; j < k; j++) {
                if (s[i + j] != s[i]) {
                    valid = false;
                    break;
                }
            }
            if (valid) {
                if ((i == 0 || s[i - 1] != s[i]) &&
                    (i + k == s.length() || s[i + k] != s[i])) {
                    return true;
                }
            }
        }
        return false;
    }
};