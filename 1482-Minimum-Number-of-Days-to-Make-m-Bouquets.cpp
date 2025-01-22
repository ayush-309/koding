class Solution {
public:
    long int minDays(vector<int>& bloomDay, long int m, long int k) {
        if (m*k>bloomDay.size()){
            return -1;
        }
        long int low = INT_MAX, high = INT_MIN;
        long int ans=INT_MAX;
        for (long int i=0; i<bloomDay.size(); i++){
            if (bloomDay[i]<low){
                low = bloomDay[i];
            }
            if (bloomDay[i]>high){
                high = bloomDay[i];
            }
        }
        while (low<=high){
            long int mid = (low+high)/2;
            long int count=0, flag=0;
            for (long int i=0; i<bloomDay.size(); i++){
                if (mid>=bloomDay[i]){
                    flag++;
                }
                else{
                    flag=0;
                }
                if (flag==k){
                    count++;
                    flag=0;
                }
            }
            if (count>=m){
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