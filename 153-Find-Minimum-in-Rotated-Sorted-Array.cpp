class Solution {
public:
    int findMin(vector<int>& nums) {
        int minElem = INT_MAX;
        int low = 0;
        int high = nums.size() - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[low] <= nums[mid]) {
                if (nums[low] < minElem) {
                    minElem = nums[low];
                }
                low = mid + 1;
            } else {
                if (nums[mid] < minElem) {
                    minElem = nums[mid];
                }
                high = mid - 1;
            }
        }
        return minElem;
    }
};