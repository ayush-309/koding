class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0;
        if (needle == haystack) return 0;
        int n = needle.length();
        int h = haystack.length();
        if (n > h) return -1;

        for (int i = 0; i <= h - n; i++) {  // Fixed condition
            string sub = haystack.substr(i, n);
            if (sub == needle) return i;
        }
        return -1;
    }
};
