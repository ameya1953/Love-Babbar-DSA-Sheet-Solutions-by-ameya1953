#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {   // This has a time complexity of O(n*m*logm)
        // code here
        int n = a.size();
        int m = b.size();
        int i = 0;
        int j = 0;
        
        while(i < n && j < m) {
            if(a[i] <= b[j]) {
                i++;
            }
            else {
                swap(a[i], b[j]);
                // j++;
                sort(a.begin(), a.end());
                sort(b.begin() + j, b.end());
            }
            
        }
    }
};