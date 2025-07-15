class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int current_price = prices[0];
        int max_profit = 0;

        for (const int price : prices) {
            if (price < current_price) {
                current_price = price;
            } else {
                const int profit = price - current_price;
                max_profit = max(max_profit, profit);
            }
        }

        return max_profit;
    }
};