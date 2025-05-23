// Problem of the Day 1: Second Largest

/* Problem Statement:
Given an array of Intervals arr[][], where arr[i] = [starti, endi]. The task is to merge all of the overlapping Intervals. */

class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        // Code here
        
        vector<vector<int>>ans;
        sort(arr.begin(), arr.end());
        ans.push_back(arr[0]);
        for(int i = 1; i < arr.size(); i++) {
            if(ans.back()[1] >= arr[i][0]) {
                ans.back()[1] = max(ans.back()[1], arr[i][1]);
            }
            else {
                ans.push_back(arr[i]);
            }
        }
        return ans;
    }
};
