#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int minJumps(vector<int>& arr) {
        // code here
        int n = arr.size();
        if(n <= 1) return 0;
        
        int maxReach = 0;
        int currPosition = 0;
        int jumps = 0;
        for(int i = 0; i < n - 1; i++) {
            maxReach = max(maxReach, i + arr[i]);
            
            if(i == currPosition) {
                if(maxReach <= i) {
                    return -1;
                }
                jumps++;
                currPosition = maxReach;
            }
        }
        
        return jumps;
    }
};
