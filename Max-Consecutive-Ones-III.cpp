class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxLen=0;
        int i=0, j=0, zeroes=0, n=nums.size();
        while (j<n){
            if (nums[j]==0) zeroes++;
            if (zeroes>k){
                if (nums[i]==0) zeroes--;
                i++;
            }
            if (zeroes<=k) maxLen = max(maxLen, j-i+1);
            j++;
        }
        return maxLen;
    }
};