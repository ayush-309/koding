class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = INT_MIN;
        int ans = INT_MAX;

        for (int i=0; i<nums.size(); i++){
            high = max(high, nums[i]);
        }
        if (threshold==nums.size()){
            return high;
        }
        while (low<=high){
            int mid = (low+high)/2;
            int sum=0;
            for (int i=0; i<nums.size(); i++){
                sum+=ceil(double(nums[i])/double(mid));
            }
            if (sum<=threshold){
                ans = min(ans, mid);
                high = mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};