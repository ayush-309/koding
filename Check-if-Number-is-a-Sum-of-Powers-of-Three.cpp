class Solution {
public:
    bool checkPowersOfThree(int n) {
        vector<int> p = {1,     3,      9,      27,      81,
                         243,   729,    2187,   6561,    19683,
                         59049, 177147, 531441, 1594323, 4782969};
        while (n >= 0 && !p.empty()) {
            int i = p[p.size() - 1];
            p.pop_back();
            if (n >= i)
                n -= i;
            if (n == 0)
                return true;
        }
        return false;
    }
};