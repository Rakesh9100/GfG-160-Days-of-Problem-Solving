// Problem of the Day 12: Max Circular Subarray Sum

/* Problem Statement:
Given an array of integers arr[] in a circular fashion. Find the maximum subarray sum that we can get if we assume the array to be circular. */

class Solution {
  public:
    // arr: input array
    // Function to find maximum circular subarray sum.
    int circularSubarraySum(vector<int> &arr) {

        // your code here
        
        // Get the size of the input array.
        int n = arr.size();

        // Create a helper array 'temp' to store the maximum sums for later use.
        vector<int> temp(n, 0); // Initialize all values in 'temp' to 0.

        // Variables to keep track of the current sum and the maximum sum.
        int curr = 0, maxi = 0;

        // Loop to fill the 'temp' array with the maximum sum from the back of 'arr'.
        // This means we look at subarrays starting from the rightmost part.
        for (int i = n - 1; i >= 0; i--) {
            curr += arr[i];            // Add the current element to the running sum.
            maxi = max(maxi, curr);    // Update the maximum sum so far.
            temp[i] = maxi;            // Store the maximum sum at this position in 'temp'.
        }

        // Variables to keep track of the overall answer and prefix sum.
        int ans = arr[0]; // Start with the first element as the default answer.
        int pre = 0;      // 'pre' will store the sum of elements from the start.
        curr = 0;         // Reset 'curr' to use for the forward loop.

        // Loop to calculate the maximum sum in a forward direction.
        for (int i = 0; i < n; i++) {
            curr += arr[i];
            ans = max(ans, curr);
            curr = max(0, curr);

            // Check if combining prefix and 'temp' gives a better circular subarray sum.
            ans = max(ans, pre + temp[i]);

            pre += arr[i];            // Add the current element to the prefix sum.
        }

        // Return the largest sum we found.
        return ans;
    }
};
