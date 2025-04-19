// Problem of the Day 14: Implement Atoi

/* Problem Statement:
Given a string s, the objective is to convert it into integer format without utilizing any built-in functions. Refer the below steps to know about atoi() function. */

class Solution {
  public:
    int myAtoi(char *s) {
        // Your code here
        
        int i=0, sign=1;
        long ans=0;

        while(s[i]==' ') i++;
        if(s[i]=='+'|| s[i]=='-') {
            sign=(s[i]=='-')?-1:1;
            i++;
        }
        while(s[i]>='0' && s[i]<='9') {
            ans=ans*10+(s[i]-'0');
            if(sign*ans>=INT_MAX) return INT_MAX;
            if(sign*ans<=INT_MIN) return INT_MIN;
            i++;
        }
        return (int)sign*ans;
        
    }
};
