class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if (s1 == s2)
            return true;
        int count = 0;
        int index = -1;
        for (int i = 0; i < s1.length(); i++) {
            if (count > 2)
                return false;
            if (s1[i] != s2[i]) {
                count++;
                if (count == 2) {
                    char temp = s1[i];
                    s1[i] = s1[index];
                    s1[index] = temp;
                    if (s1 == s2)
                        return true;
                }
                index = i;
            }
        }
        return false;
    }
};