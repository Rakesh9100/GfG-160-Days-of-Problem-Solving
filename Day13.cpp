// Problem of the Day 13: Smallest Positive Missing

/* Problem Statement:
You are given an integer array arr[]. Your task is to find the smallest positive number missing from the array.

Note: Positive number starts from 1. The array can have negative integers too. */

class Solution {
  public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(vector<int> &arr) {
        // Your code here
        
        sort(arr.begin(),arr.end());
        int ans = 1;
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            if (arr[i] == ans)
            ans++;
            else if(arr[i] > ans)
            break;
        }
        
        return ans;
    }
};
