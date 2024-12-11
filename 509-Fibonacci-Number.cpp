class Solution {
public:
    int fib(int n) {
        int f[n + 1];
        f[0] = 0;
        if (n > 0) {
            f[1]=1;
            int i = 2;
            while (i <= n) {
                f[i] = f[i - 1] + f[i - 2];
                i++;
            }
            return f[i - 1];
        }
        return 0;
    }
};