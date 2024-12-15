class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buy=prices[0], maxProfit=0;
        for (int i=1; i<n; i++){
            int profit = prices[i]-buy;
            maxProfit=max(profit, maxProfit);
            buy=min(prices[i], buy);
        }
        return maxProfit;
    }
};