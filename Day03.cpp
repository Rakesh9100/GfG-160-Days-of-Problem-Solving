// Problem of the Day 3: Reverse an Array

/* Problem Statement:
You are given an array of integers arr[]. Your task is to reverse the given array.

Note: Modify the array in place. */

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        
        int s = 0;
        int e = arr.size() - 1;
        while(s < e) {
            swap(arr[s], arr[e]);
            s++;
            e--;
        }
    }
};
