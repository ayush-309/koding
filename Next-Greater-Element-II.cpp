class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        vector<int> ans(nums.size(), -1);
        for (int i = nums.size()*2 - 1; i >= 0; i--) {
            while (!st.empty() && nums[i%nums.size()] >= st.top()) {
                st.pop();
            }
            if (!st.empty() && st.top() > nums[i%nums.size()]) ans[i%nums.size()] = st.top();
            st.push(nums[i%nums.size()]);
        }
        return ans;
    }
};