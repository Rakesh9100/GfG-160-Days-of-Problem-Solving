// Problem of the Day 1: Sort 0s, 1s and 2s

/* Problem Statement:
Given an array arr[] containing only 0s, 1s, and 2s. Sort the array in ascending order.

You need to solve this problem without utilizing the built-in sort function. */

class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        
        int zeros = 0, ones = 0;
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] == 0) zeros++;
            else if(arr[i] == 1) ones++;
        }
        for(int i = 0; i < arr.size(); i++) {
            if(zeros) {
                arr[i] = 0;
                zeros--;
            }
            else if(ones) {
                arr[i] = 1;
                ones--;
            }
            else arr[i] = 2;
        }
    }
};
