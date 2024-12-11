class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> temp(nums);
        for (int i=0; i<n; i++){
            int index=(i+k)%n;
            nums[index]=temp[i];
        }
    }
};