class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        // int i = 0, j;
        // for (j = 0; j < nums.size(); ++j) {
        //     if (nums[j] == 0)
        //         k--; // Use a flip
        //     if (k < 0) {
        //         if (nums[i] == 0)
        //             k++; // Reclaim the flip
        //         i++;
        //     }
        // }
        // return j - i; // Window size

        int i = 0, maxLen = 0;
        int zeroCount = 0;

        for (int j = 0; j < nums.size(); ++j) {
            if (nums[j] == 0) {
                zeroCount++; // We are flipping this 0
            }

            // If we flipped more than k zeros, move the left pointer
            while (zeroCount > k) {
                if (nums[i] == 0) {
                    zeroCount--; // Reclaim this flip
                }
                i++; // Shrink the window from the left
            }

            // Update the maximum window length
            maxLen = max(maxLen, j - i + 1);
        }

        return maxLen;
    }
};