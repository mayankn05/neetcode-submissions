class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        int maxP = 0;

            for(int i = 0;i<len;i++){
                for(int j= i+1;j<len;j++){
                    maxP = max(maxP, prices[j] - prices[i]);
                    cout << maxP;
                }
            }
        return maxP;
    }
};
