#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // code here
        vector<int> posArr;
        vector<int> negArr;
        
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] >= 0) {
                posArr.push_back(arr[i]);
            } else {
                negArr.push_back(arr[i]);
            }
        }
        
        for(int i = 0; i < negArr.size(); i++) {
            posArr.push_back(negArr[i]);
        }
        arr = posArr;
    }
};