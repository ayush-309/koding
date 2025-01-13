class Solution {
public:
    int recursiveBinarySearch(vector<int>& nums, int target, int low,
                              int high) {
        if (low > high)
            return -1;
        int mid = (low + high) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            return recursiveBinarySearch(nums, target, mid + 1, high);
        }
        return recursiveBinarySearch(nums, target, low, mid - 1);
    }
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        return recursiveBinarySearch(nums, target, low, high);
    }
};