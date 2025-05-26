class Solution {
public:
    int characterReplacement(string s, int k) {
        int i = 0, maxF = 0, maxLen = 0;
        map<char, int> mpp;
        for (int j = 0; j < s.size(); j++) {
            mpp[s[j]]++;
            maxF = max(maxF, mpp[s[j]]);
            if ((j - i + 1) - maxF > k) {
                mpp[s[i]]--;
                i++;
            }
            maxLen = max(maxLen, j - i + 1);
        }
        return maxLen;
    }
};