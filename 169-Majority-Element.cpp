class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int majorElem=0, max=0;
        map<int, int> mpp;

        for(int i=0; i<n; i++){
            mpp[nums[i]]++;
        }

        for (auto it : mpp){
            majorElem = (it.second)>max? it.first: majorElem;
            max = (it.second)>max? it.second: max;
        }
        return majorElem;
    }
};