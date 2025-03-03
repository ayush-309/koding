class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int countEqual=0;
        vector<int> lessThan;
        vector<int> greaterThan;
        for (int i=0; i<nums.size(); i++){
            if (nums[i]==pivot) countEqual++;
            else if (nums[i]<pivot) lessThan.push_back(nums[i]);
            else greaterThan.push_back(nums[i]);
        }
        vector<int> ans;
        ans.insert(ans.end(), lessThan.begin(), lessThan.end());
        for (int i=0; i<countEqual; i++) ans.push_back(pivot);
        ans.insert(ans.end(), greaterThan.begin(), greaterThan.end());
        return ans;
    }
};