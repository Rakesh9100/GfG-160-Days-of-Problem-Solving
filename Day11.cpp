// Problem of the Day 11: Maximum Product Subarray

/* Problem Statement:
Given an array arr[] that contains positive and negative integers (may contain 0 as well). Find the maximum product that we can get in a subarray of arr[].

Note: It is guaranteed that the output fits in a 32-bit integer. */

class Solution {
  public:
    // Function to find maximum product subarray
    int maxProduct(vector<int> &arr) {
        // Your Code Here
        
        int left = 1, right = 1;
        
        int n = arr.size();
        
        int maxLeft = INT_MIN, maxRight = INT_MIN;
        
        for (int i = 0; i < n; i++) {
            left *= arr[i];
            
            maxLeft = max(maxLeft, left);
            
            if (left == 0) left = 1;
        }
        
        for (int i = n - 1; i >= 0; i--) {
            right *= arr[i];
            
            maxRight = max(maxRight, right);
            
            if (right == 0) right = 1;
        }
        
        return max(maxLeft, maxRight);
    }
};
