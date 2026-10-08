class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP = 0;
        int minBuy = prices[0];

        for (int& sell : prices) {
            maxP = max(maxP, sell - minBuy);
            minBuy = min(minBuy, sell);
        }
        return maxP;
    }
};

//come back to this, don't know what's DP
//also, can't sort because lower price needs to be before higher
//sorting will put lowest at [0]