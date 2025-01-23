class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int high = 0;
        int low = INT_MIN;
        int ans = INT_MAX;
        for (int i=0; i<weights.size(); i++){
            high += weights[i];
            low = max(low, weights[i]);
        }
        while (low<=high){
            int mid = (low+high)/2;
            int count=0, weightSum=0;
            for (int i=0; i<weights.size(); i++){
                if (weightSum+weights[i]>mid){
                    count++;
                    weightSum=0;
                }
                weightSum+=weights[i];
                if (i==weights.size()-1 && mid>=weightSum){
                    count++;
                }
            }
            cout<<mid<<", "<<count<<endl;
            if (count<=days){
                ans = min(ans, mid);
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};