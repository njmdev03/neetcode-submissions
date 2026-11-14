class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() < 2) {
            return 0;
        }

        int min = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); ++i) {
            int price = prices[i];

            if (price < min) {
                min = price;
                // continue;
            } else {
                maxProfit = max(maxProfit, price - min);
            }
        }

        return maxProfit;
    }
};
