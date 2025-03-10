class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        // Brute force - O(N*M)

        // vector<int> ans(nums1.size(), -1);
        // for (int i=0; i<nums1.size(); i++){
        //     bool found = false;
        //     for (int j=0; j<nums2.size(); j++){
        //         if (nums2[j] == nums1[i]) found = true;
        //         if (found && nums2[j]>nums1[i]){
        //             ans[i] = nums2[j];
        //             break;
        //         }
        //     }
        // }
        // return ans;

        // Optimal approach - Monotonic Stack
        map<int, int> mpp;
        for (int i = 0; i < nums1.size(); i++) {
            mpp[nums1[i]] = i;
        }
        stack<int> st;
        for (int i = nums2.size() - 1; i >= 0; i--) {
            if (mpp.find(nums2[i]) != mpp.end()) {
                if (st.empty())
                    nums1[mpp[nums2[i]]] = -1;
                else {
                    while (!st.empty() && nums2[i]>st.top()){
                        st.pop();
                    }
                    nums1[mpp[nums2[i]]] = st.empty()? -1: st.top();
                }
            }
            st.push(nums2[i]);
        }
        return nums1;
    }
};