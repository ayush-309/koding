class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        // Dutch National Flag Algorithm
        int low=0, mid=0, high=n-1;
        while (mid<=high){
            if (nums[mid]==0){
                swap(nums[mid], nums[low]);
                mid++;
                low++;
                continue;
            }
            if (nums[mid]==1){
                mid++;
                continue;
            }
            if (nums[mid]==2){
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};