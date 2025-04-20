// Problem of the Day 15: Add Binary Strings

/* Problem Statement:
Given two binary strings s1 and s2 consisting of only 0s and 1s. Find the resultant string after adding the two Binary Strings.
Note: The input strings may contain leading zeros but the output string should not have any leading zeros. */

class Solution {
  public:
    string addBinary(string& s1, string& s2) {
        // your code here
        
        string ans = "";
        int i = s1.size()-1;
        int j = s2.size()-1;
        int carry = 0;
        while(i >= 0 || j >= 0) {
            int count1s = 0;
            if(i >= 0 && s1[i] == '1') count1s++;
            if(j >= 0 && s2[j] == '1') count1s++;
            
            if(count1s + carry==0) {
                ans += '0';
                carry = 0;
            }
            else if(count1s + carry==1) {
                ans += '1';
                carry = 0;
            }
            else if(count1s + carry==2) {
                ans += '0';
                carry = 1;
            }
            else if(count1s + carry==3) {
                ans += '1';
                carry = 1;
            }
            i--;
            j--;
        }
        if(carry == 1) {
            ans += to_string(carry);
        }
        reverse(ans.begin(), ans.end());
        i = 0;
        while(ans[i] == '0') {
            ans.erase(0, 1);
        }
        
        return ans;
    }
};
