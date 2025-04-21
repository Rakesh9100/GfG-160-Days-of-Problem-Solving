// Problem of the Day 16: Anagram

/* Problem Statement:
Given two strings s1 and s2 consisting of lowercase characters. The task is to check whether two given strings are an anagram of each other or not. An anagram of a string is another string that contains the same characters, only the order of characters can be different. For example, "act" and "tac" are an anagram of each other. Strings s1 and s2 can only contain lowercase alphabets.

Note: You can assume both the strings s1 & s2 are non-empty. */

class Solution {
  public:
    // Function is to check whether two strings are anagram of each other or not.
    bool areAnagrams(string& s1, string& s2) {
        // Your code here
        
        if(s1.size() != s2.size()) return false;
        
        vector<int>freq1(26, 0);
        vector<int>freq2(26, 0);
        
        for(int i=0; i<s1.size(); i++) {
            freq1[s1[i]-'a']++;
            freq2[s2[i]-'a']++;
        }
        
        return freq1 == freq2;
    }
};
