// Problem of the Day 6: Majority Element II

/* Problem Statement:
You are given an array of integer arr[] where each number represents a vote to a candidate. Return the candidates that have votes greater than one-third of the total votes, If there's not a majority vote, return an empty array. 

Note: The answer should be returned in an increasing format. */

class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
        // Your code goes here.
        
        int n = arr.size();
        vector<int> ans;

        if (n == 0) return ans; // Handle empty array
        if (n == 1) return arr; // Handle single element array

        // Variables for candidates and their counts
        int ele1 = 0, ele2 = 0, c1 = 0, c2 = 0;

        // Step 1: Find potential candidates
        for (int num : arr) {
            if (num == ele1) {
                c1++;
            } else if (num == ele2) {
                c2++;
            } else if (c1 == 0) {
                ele1 = num;
                c1 = 1;
            } else if (c2 == 0) {
                ele2 = num;
                c2 = 1;
            } else {
                c1--;
                c2--;
            }
        }

        // Step 2: Verify the candidates
        c1 = 0, c2 = 0;
        for (int num : arr) {
            if (num == ele1) c1++;
            else if (num == ele2) c2++;
        }

        if (c1 > n / 3) ans.push_back(ele1);
        if (c2 > n / 3 && ele2 != ele1) ans.push_back(ele2); // Avoid duplicates

        sort(ans.begin(), ans.end());
        return ans;
        
    }
};
