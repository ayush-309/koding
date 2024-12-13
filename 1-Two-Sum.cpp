class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int, int> mpp;
        vector<int> indices;
        for (int i=0; i<n; i++){
            int more = target-nums[i];
            if (mpp.find(more) != mpp.end()){
                auto it = mpp.find(more);
                indices.push_back(i);
                indices.push_back(it->second);
            }
            mpp[nums[i]]=i;
        }
        return indices;
    }
};