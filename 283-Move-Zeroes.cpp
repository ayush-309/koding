class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int> storedIndices;
        for (int i=0; i<n; i++){
            if (nums[i]==0){
                storedIndices.push_back(i);
                continue;
            }
            if (!(storedIndices.empty())){
                auto it = storedIndices.begin();
                nums[*(it)]=nums[i];
                storedIndices.erase(storedIndices.begin());
                nums[i]=0;
                storedIndices.push_back(i);
            }
        }
    }
};