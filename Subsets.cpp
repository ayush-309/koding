class Solution {
public:
    void solve(vector<int> entry, vector<int> nums, vector<vector<int>> &ans, int i){
        if (i==nums.size()){
            ans.push_back(entry);
            return;
        }
        solve(entry, nums, ans, i+1);
        entry.push_back(nums[i]);
        solve(entry, nums, ans, i+1);
        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(temp, nums, ans, 0);
        return ans;
    }
};