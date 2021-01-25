class Solution {
public:
    int maxProfit(vector<int>& prices) {
        const int n = prices.size();
        if (n <= 1) return 0;
        int maxP = 0, minP = prices[0];
        for (auto i = 1; i < n; ++i) {
            minP = min(minP, prices[i]);
            maxP = max(maxP, prices[i] - minP);
        }
        return maxP;
    }
};