class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;

        for (int i = 0; i < prices.size() - 1; ++i) {
            int buyPrice = prices[i];

            for (int j = i + 1; j < prices.size(); ++j) {
                int profit = prices[j] - buyPrice;

                if (profit > max) {
                    max = profit;
                }
            }
        }

        return max;
    }
};
