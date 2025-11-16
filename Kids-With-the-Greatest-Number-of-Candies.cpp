class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans(candies.size());
        int maxCandies = INT_MIN;
        for (int i=0; i<candies.size(); i++){
            maxCandies = max(candies[i], maxCandies);
        }
        for (int i=0; i<candies.size(); i++){
            ans[i] = candies[i]+extraCandies >= maxCandies;
        }
        return ans;
    }
};