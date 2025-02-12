class Solution {
public:
    int sumOfDigits(int num) {
        int sum = 0;
        int digit = num % 10;
        while (num != 0) {
            sum += digit;
            num = num / 10;
            digit = num % 10;
        }
        return sum;
    }

    int maximumSum(vector<int>& nums) {
        // int maxSum = -1;
        // int sum, dSum;
        // map<int, int> mpp;
        // for (int i = 0; i < nums.size(); i++) {
        //     dSum = sumOfDigits(nums[i]);
        //     if (mpp.find(dSum) != mpp.end()) {
        //         sum = nums[i] + nums[mpp[dSum]];
        //         maxSum = max(sum, maxSum);
        //         mpp[dSum] = nums[i] > nums[mpp[dSum]] ? i : mpp[dSum];
        //     } else {
        //         mpp[dSum] = i;
        //     }
        // }
        // return maxSum;

        int mp[82];  // Stores max num for each digit sum
        memset(mp, -1, sizeof(mp));
        int ans = -1;

        for (int num : nums) {
            int sumDigits = 0, temp = num;
            while (temp) sumDigits += temp % 10, temp /= 10;

            if (mp[sumDigits] != -1)
                ans = max(ans, num + mp[sumDigits]);

            mp[sumDigits] = max(mp[sumDigits], num);
        }
        return ans;
    }
};