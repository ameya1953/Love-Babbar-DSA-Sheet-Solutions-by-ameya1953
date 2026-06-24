#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        // code here
        
        sort(arr.begin(), arr.end());    // O(nlogn)
        
        int diff = arr[arr.size() - 1] - arr[0];
        
        int smallest = arr[0] + k;
        int largest = arr[arr.size() - 1] - k;
        
        for(int i = 0; i < arr.size() - 1; i++) {               // O(n)
            int minHeight = min(smallest, arr[i + 1] - k);
            int maxHeight = max(largest, arr[i] + k);
            
            // since we are to ignore negative height
            if(minHeight < 0) continue;
            
            diff = min(diff, maxHeight - minHeight);
        }
        
        return diff;
    }
};