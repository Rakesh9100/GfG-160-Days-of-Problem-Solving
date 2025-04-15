// Problem of the Day 10: Kadane's Algorithm

/* Problem Statement:
Given an integer array arr[]. You need to find the maximum sum of a subarray. */

class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Your code here
        
        int sum = 0; // Initialize the sum of the current subarray
            int ans = INT_MIN; // Initialize the maximum sum with the smallest integer
            int n = arr.size(); // Get the size of the input array
            
            // Loop through each element in the array
            for (int i = 0; i < n; i++) {
                sum += arr[i]; // Add the current element to the running sum
                ans = max(ans, sum); // Update the maximum sum found so far
                
                // If the running sum becomes negative, reset it to 0
                // (This is because a negative sum will reduce any future subarray sum)
                if (sum < 0) sum = 0;
            }
            
            // Return the maximum subarray sum
            return ans;
    }
};
