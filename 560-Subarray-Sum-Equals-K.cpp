class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        map<int, int> prefixSum;
        int sum = 0, count = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            int more = sum - k;
            if (sum == k) {
                count++;
            }
            if (prefixSum.find(more) != prefixSum.end()) {
                count+=prefixSum[more];
            }
            prefixSum[sum]++;
        }
        return count;
    }
};