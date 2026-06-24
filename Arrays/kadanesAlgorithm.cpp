#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int maxSum = arr[0];
        int current = arr[0];
        
        for(int i = 1; i < arr.size(); i++) {
            current = max(arr[i], current + arr[i]);
            maxSum = max(maxSum, current);
        }
        
        return maxSum;
    }
};