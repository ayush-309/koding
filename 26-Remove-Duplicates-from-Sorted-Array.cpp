class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int k=0, index=0;
        map<int, int> mpp;
        for (int i=0; i<n; i++){
            mpp[nums[i]]++;
        }
        for (auto it : mpp){
            k++;
            nums[index++]=it.first;
        }
        return k;
    }
};