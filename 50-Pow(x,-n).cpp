class Solution {
public:
    double Power(double x, int n) {
        if (n == 0)
            return 1;
        if (n % 2 == 0) {
            return Power(x * x, n / 2);
        } else {
            return x * Power(x, n - 1);
        }
    }
    double myPow(double x, int n) {
        if (n == INT_MAX) return (x == 1) ? 1 : (x == -1) ? -1 : 0;
        if (n == INT_MIN) return (x == 1 || x == -1) ? 1 : 0;
        if (n >= 0)
            return Power(x, n);
        else {
            return 1 / Power(x, -1*n);
        }
    }
};