#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int z = 0;
        int o = 0;
        int t = 0;
        
        for (int i = 0; i < arr.size(); i++) {
            if(arr[i] == 0) {
                z++;
            }
            else if(arr[i] == 1) {
                o++;
            }
            else {
                t++;
            }
        }
        
        vector<int> ans;
        
        for(int i = 0; i < z; i++) {
            ans.push_back(0);
        }
        for(int i = 0; i < o; i++) {
            ans.push_back(1);
        }
        for(int i = 0; i < t; i++) {
            ans.push_back(2);
        }
        
        arr = ans;
    } 
    // Time complexity: O(n)
    // Space Complexity: O(n)
    
    // Solving by Dutch National Flag Algorithm
    void sort012(vector<int>& arr) {
        
        int low = 0;
        int mid = 0;
        int high = arr.size() - 1;

        while(mid <= high) {
            if(arr[mid] == 0) {
                swap(arr[mid], arr[low]);
                low++;
                mid++;
            }
            else if(arr[mid] == 1) {
                mid++;
            }
            else {
                swap(arr[mid], arr[high]);
                high--;
            }
        }
    }
    // Time complexity: O(n)
    // Space Complexity: O(1)
};