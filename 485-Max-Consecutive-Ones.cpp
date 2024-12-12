class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int lastElem=0, count=0, maxCount=0;
        for (int i=0; i<n; i++){
            if (nums[i]==1){
                if (i==0 || nums[i-1]==0){
                    count++;
                }
                if (lastElem==1){
                    count++;
                }
                lastElem=1;
            }
            if (count>maxCount){
                maxCount=count;
            }
            if (nums[i]==0){
                count=0;
                lastElem=0;
            }
        }
        return maxCount;
    }
};