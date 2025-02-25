class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        long long ans = 0;
        const int MOD = 1e9 + 7;

        // TLE - O(n^2)
        // for (int i=0; i<arr.size(); i++){
        //     int sum=0;
        //     for (int j=i; j<arr.size(); j++){
        //         sum+=arr[j];
        //         if (sum%2==1){
        //             ans++;
        //         }
        //     }
        // }

        int sum = 0, odd = 0, even = 0;
        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];
            if (sum % 2 == 1) {
                ans += even + 1;
                odd++;
            } else {
                ans += odd;
                even++;
            }
        }
        if (ans > INT_MAX)
            return ans % MOD;
        return ans;
    }
};