// Problem of the Day 18: Search Pattern (KMP-Algorithm)

/* Problem Statement:
Given two strings, one is a text string txt and the other is a pattern string pat. The task is to print the indexes of all the occurrences of the pattern string in the text string. Use 0-based indexing while returning the indices. 
Note: Return an empty list in case of no occurrences of pattern. */

class Solution {
  public:
    void computeLPSArray(string pat, int M, vector<int>& lps) {
        int len = 0;
        int i;

        lps[0] = 0;
        i = 1;

        while (i < M) {
            if (pat[i] == pat[len]) {
                len++;
                lps[i] = len;
                i++;
            }

            else {
                if (len != 0) {
                    len = lps[len - 1];

                } else {
                    lps[i] = 0;
                    i++;
                }
            }
        }
    }

    vector<int> search(string& pat, string& txt) {
        vector<int> res;
        int M = pat.size();
        int N = txt.size();

        vector<int> lps(M + 1, 0);
        int j = 0;
        computeLPSArray(pat, M, lps);
        int f = 0;
        int i = 0; // index for txt[]
        while (i < N) {
            if (pat[j] == txt[i]) {
                j++;
                i++;
            }

            if (j == M) {
                f++;
                res.push_back(i - j);
                j = lps[j - 1];
            }

            // mismatch after j matches
            else if (i < N && pat[j] != txt[i]) {
                if (j != 0)
                    j = lps[j - 1];
                else
                    i = i + 1;
            }
        }

        return res;
    }
};
