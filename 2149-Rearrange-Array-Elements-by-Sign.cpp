class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> modifiedNums(n, 0);
        int posIndex=0;
        int negIndex=1;
        for (int i=0; i<n; i++){
            if (nums[i]<0){
                modifiedNums[negIndex]=nums[i];
                negIndex+=2;
            }
            else{
                modifiedNums[posIndex]=nums[i];
                posIndex+=2;
            }
        }
        // vector<int> pos;
        // vector<int> neg;
        // for (int i = 0; i < n; i++) {
        //     if (nums[i] > 0) {
        //         pos.push_back(nums[i]);
        //     } else {
        //         neg.push_back(nums[i]);
        //     }
        // }
        // int index = 0, i = 0, j = 0;
        // while (index < n) {
        //     if (index % 2 == 0) {
        //         nums[index] = pos[i];
        //         i++;
        //     } else {
        //         nums[index] = neg[j];
        //         j++;
        //     }
        //     index++;
        // }
        return modifiedNums;
    }
};