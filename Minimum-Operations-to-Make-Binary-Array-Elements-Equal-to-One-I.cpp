class Solution {
public:
    void flip(vector<int>& nums, int index) {
        for (int i = 0; i < 3; i++) {
            if (nums[index + i] == 0)
                nums[index + i] = 1;
            else
                nums[index + i] = 0;
        }
    }
    int minOperations(vector<int>& nums) {
        int numOps = 0;
        int start = 0;
        for (int i = 0; i < nums.size() - 2; i++) {
            if (nums[i] == 1)
                continue;
            else {
                flip(nums, i);
                numOps++;
            }
        }
        for (int i=0; i<nums.size(); i++){
            if (nums[i]==0) return -1;
        }
        return numOps;
    }
};