// Problem of the Day 2: Move All Zeroes to End

/* Problem Statement:
You are given an array arr[] of non-negative integers. Your task is to move all the zeros in the array to the right end while maintaining the relative order of the non-zero elements.
The operation must be performed in place, meaning you should not use extra space for another array. */

class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        
        int left = 0; 
        for(int right=0; right<arr.size(); right++) {
            if(arr[right] != 0) {
                swap(arr[right], arr[left]);
                left++;
            }
        }
    }
};
