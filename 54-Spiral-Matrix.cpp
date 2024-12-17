class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int top = 0, left = 0;
        int bottom = n - 1, right = m - 1;
        int count = 0;
        vector<int> ans;
        while (count <= n * m) {
            for (int i = left; i <= right; i++) {
                ans.push_back(matrix[top][i]);
                count++;
                if (count == n * m)
                    return ans;
            }
            top++;
            for (int i = top; i <= bottom; i++) {
                ans.push_back(matrix[i][right]);
                count++;
                if (count == n * m)
                    return ans;
            }
            right--;
            for (int i = right; i >= left; i--) {
                ans.push_back(matrix[bottom][i]);
                count++;
                if (count == n * m)
                    return ans;
            }
            bottom--;
            for (int i = bottom; i >= top; i--) {
                ans.push_back(matrix[i][left]);
                count++;
                if (count == n * m)
                    return ans;
            }
            left++;
        }
        return ans;
    }
};