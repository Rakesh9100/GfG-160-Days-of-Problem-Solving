// Problem of the Day 5: Next Permutation

/* Problem Statement:
Given an array of integers arr[] representing a permutation, implement the next permutation that rearranges the numbers into the lexicographically next greater permutation. If no such permutation exists, rearrange the numbers into the lowest possible order (i.e., sorted in ascending order). 

Note - A permutation of an array of integers refers to a specific arrangement of its elements in a sequence or linear order. */

class Solution {
  public:
    void nextPermutation(vector<int>& nums) {
        // code here
        
        int n = nums.size();
        
        // Finding the rightmost peak
        int rm_peak = -1;
        for (int i = 1; i < n; ++i) {
            if (nums[i] > nums[i - 1])
                rm_peak = i;
        }

        if (rm_peak == -1) {
            std::reverse(nums.begin(), nums.end());
            return;
        }

        int index = rm_peak;
        for (int i = rm_peak; i < n; ++i) {
            if (nums[i] > nums[rm_peak - 1] && nums[i] < nums[rm_peak]) {
                index = i;
            }
        }
        swap(nums[index], nums[rm_peak - 1]);
        sort(nums.begin() + rm_peak, nums.end());
        
    }
};
