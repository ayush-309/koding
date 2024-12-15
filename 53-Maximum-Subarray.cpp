class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int sum=0, maxSum = INT_MIN, index=-1, start=-1, end=-1;
        // Kadane's Algorithm
        for (int i=0; i<n; i++){
            if (sum==0){
                index=i;
            }
            sum += nums[i];
            if (sum>=maxSum){
                maxSum=sum;
                start=index;
                end=i; 
            }
            if (sum<0){
                sum=0;
            }
        }
        // for (int i=start; i<=end; i++){
        //     cout<<nums[i]<<", ";
        // }
        return maxSum;
    }
};