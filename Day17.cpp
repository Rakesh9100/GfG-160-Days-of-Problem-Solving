// Problem of the Day 17: Non Repeating Character

/* Problem Statement:
Given a string s consisting of lowercase English Letters. Return the first non-repeating character in s.
If there is no non-repeating character, return '$'.
Note: When you return '$' driver code will output -1. */

class Solution {
  public:
    char nonRepeatingChar(string &s) {
        // Your code here
        
        vector<int>freq(26, 0);
        for(int i = 0; i < s.size(); i++) {
            freq[s[i] - 'a']++;
        }
        for(int i = 0; i < s.size(); i++) {
            if(freq[s[i] - 'a'] == 1) return s[i];
        }
        return '$';
    }
};
