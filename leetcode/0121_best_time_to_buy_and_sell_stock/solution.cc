class Solution {
  public:
    int maxProfit(vector<int>& prices) {
      int max_profit = 0;
      int profit = 0;
      for (int i = 1; i < prices.size(); i++) {
        profit += prices[i] - prices[i - 1];
        if (profit > max_profit) {
          max_profit = profit;
        }
        if (profit < 0) {
          profit = 0;
        }
      }
      return max_profit;
    }
};
