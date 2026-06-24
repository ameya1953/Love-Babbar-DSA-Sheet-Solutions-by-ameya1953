#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
  /*
    Problem with this approach:
    1. You're allocating an extra vector just to do a rotation, which can be done in-place in O(1).


    void rotate(vector<int> &arr) {
        // code here
        vector<int> ans{arr[arr.size() - 1]};
        
        for(int i = 0; i < arr.size() - 1; i++) {
            ans.push_back(arr[i]);
        }
        arr = ans;
    }

    */

    // Trying to optimzize space:
    void rotate(vector<int> &arr) {
        // code here
        
        int last = arr[arr.size() - 1];

        for(int i = 1; i < arr.size(); i++) {
            arr[i] = arr[i - 1];
        }

        arr[0] = last;
    }
};