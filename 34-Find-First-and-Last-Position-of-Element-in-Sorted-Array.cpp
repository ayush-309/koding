class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int first = -1, last = -1;
        int low = 0, high = nums.size() - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] == target) {
                first = mid;
                high = mid - 1;
            } else if (nums[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        low = nums.size() - 1, high = 0;
        while (low >= high) {
            int mid = (low + high) / 2;
            if (nums[mid] == target) {
                last = mid;
                high = mid + 1;
            } else if (nums[mid] > target) {
                low = mid - 1;
            } else {
                high = mid + 1;
            }
        }
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }
};