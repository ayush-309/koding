class Solution {
public:
    bool isPalindrome(int x) {
        int rev = 0;
        int num = x;
        if (x < 0) {
            return false;
        }
        while (num != 0) {
            int i = num % 10;
            if ((rev > INT_MAX / 10) || (rev < (INT_MIN / 10))) {
                return false;
            }
            rev = rev * 10 + i;
            num = num / 10;
        }
        if (rev == x) {
            return true;
        }
        return false;
    }
};