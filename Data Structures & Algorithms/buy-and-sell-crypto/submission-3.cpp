class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        int l = 0, r = 1;
        int maxP = 0;

        while (r < len) {
            if (prices[l] < prices[r]) {
                int profit = prices[r] - prices[l];
                maxP = max(maxP, profit);
            } else {
                l = r;
            }
            r++;
        }
        return maxP;
    }
};