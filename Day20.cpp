// Problem of the Day 1: Strings Rotations of Each Other

/* Problem Statement:
You are given two strings of equal lengths, s1 and s2. The task is to check if s2 is a rotated version of the string s1.

Note: The characters in the strings are in lowercase. */

class Solution {
  public:
    // Function to check if two strings are rotations of each other or not.
    bool areRotations(string &s1, string &s2) {
        // Your code here
        
        string str = s2+'$'+s1+s1;
        int n = str.length(),i=0,j=1,m=s2.length();
        vector<int> lps(n,0);
        while(j<n){
            if(str[i]==str[j]){
                lps[j++]=++i;
                if(i==m)return true;
            }
            else if(i)i=lps[i-1];
            else j++;
        }
        return false;
    }
};
