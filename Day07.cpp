// Problem of the Day 7: Stock Buy and Sell – Multiple Transaction Allowed

/* Problem Statement:
The cost of stock on each day is given in an array price[]. Each day you may decide to either buy or sell the stock i at price[i], you can even buy and sell the stock on the same day. Find the maximum profit that you can get.

Note: A stock can only be sold if it has been bought previously and multiple stocks cannot be held on any given day. */

class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        
        int profit = 0; // Initialize profit
        int n = prices.size();

        for (int i = 0; i < n - 1; i++) {
            // If the next day's price is higher, add the difference to profit
            if (prices[i + 1] > prices[i]) {
                profit += prices[i + 1] - prices[i];
            }
        }

        return profit; // Return the total profit
    }
};
