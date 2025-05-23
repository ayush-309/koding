class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0;
        int i=0, j=0;
        map<char, int> mpp;
        while (j<s.size()){
            int sz = j-i+1;
            mpp[s[j]]++;
            if (mpp.size()==sz){
                maxLen = max(sz, maxLen);
            }
            if (mpp.size()<sz){
                mpp[s[i]]--;
                if (mpp[s[i]]==0) mpp.erase(s[i]);
                i++;
            }
            j++;
        }
        return maxLen;
    }
};