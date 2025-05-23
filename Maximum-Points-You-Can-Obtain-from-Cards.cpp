class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lSum = 0, rSum = 0, left = k - 1, right = cardPoints.size() - 1;
        int maxSum = 0;
        for (int i = 0; i < k; i++)
            lSum += cardPoints[i];
        maxSum = max(maxSum, (lSum+rSum));
        while (lSum != 0) {
            lSum -= cardPoints[left];
            left--;
            rSum += cardPoints[right];
            right--;
            maxSum = max(maxSum, (lSum+rSum));
            cout<<maxSum<<endl;
        }
        return maxSum;
    }
};