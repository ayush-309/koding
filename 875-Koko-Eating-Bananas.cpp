class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int minSpeed = INT_MIN;
        for (int i = 0; i < piles.size(); i++) {
            minSpeed = max(minSpeed, piles[i]);
        }
        if (h == piles.size()) {
            return minSpeed;
        }
        int low = 1, high = minSpeed;
        while (low <= high) {
            int mid = (low + high) / 2;
            long int hours = 0;
            for (int i = 0; i < piles.size(); i++) {
                hours += ceil(double(piles[i])/ double(mid));
            }
            if (hours == h) {
                minSpeed = mid;
                high = mid-1;
            } else if (hours > h) {
                low = mid+1;
            } else {
                minSpeed=mid;
                high = mid-1;
            }
        }
        return minSpeed;
    }
};