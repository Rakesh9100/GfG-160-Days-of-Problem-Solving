// Problem of the Day 1: Stock Buy and Sell – Max one Transaction Allowed

/* Problem Statement:
Given an array prices[] of length n, representing the prices of the stocks on different days. The task is to find the maximum profit possible by buying and selling the stocks on different days when at most one transaction is allowed. Here one transaction means 1 buy + 1 Sell. If it is not possible to make a profit then return 0.

Note: Stock must be bought before being sold. */

class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        
        int maxProfit = 0; // Maximum profit so far
        int minPrice = prices[0]; // Minimum price encountered so far
        int days = prices.size(); // Number of days

        for (int day = 1; day < days; day++) {
            maxProfit = max(maxProfit, prices[day] - minPrice);
            minPrice = min(minPrice, prices[day]);
        }

        return maxProfit;
    }
};
