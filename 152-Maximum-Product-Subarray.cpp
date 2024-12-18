class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxProd = INT_MIN;
        int left = 1, right = 1;
        for (int i = 0; i < n; i++) {
            if (left == 0)
                left = 1;
            if (right == 0)
                right = 1;
            left *= nums[i];
            right *= nums[n - i - 1];
            maxProd = max(maxProd, max(left, right));
        }
        return maxProd;
    }
};