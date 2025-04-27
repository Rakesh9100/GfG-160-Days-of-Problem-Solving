// Problem of the Day 22: Find H-Index

/* Problem Statement:
Given an integer array citations[], where citations[i] is the number of citations a researcher received for the ith paper. The task is to find the H-index.

H-Index is the largest value such that the researcher has at least H papers that have been cited at least H times. */

class Solution {
  public:
    // Function to find hIndex
    int hIndex(vector<int>& citations) {
        // code here
        
        int n=citations.size();
        vector<int> freq(n+1);
        for(int i=0;i<n;i++){
            if(citations[i]>=n) freq[n]++;
            else freq[citations[i]]++;
        }
        int Hindex=n;
        int num=freq[n];
        while(num<Hindex){
            Hindex--;
            num+=freq[Hindex];
        }
        return Hindex;
    }
};
