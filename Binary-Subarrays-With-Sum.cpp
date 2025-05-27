class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> prefixSumCount;
        prefixSumCount[0] = 1;
        int sum = 0, result = 0;
        for (int num : nums) {
            sum += num;
            result += prefixSumCount[sum - goal];
            prefixSumCount[sum]++;
        }
        return result;
    }
};
