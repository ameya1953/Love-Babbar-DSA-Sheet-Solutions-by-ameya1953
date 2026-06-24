#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here

        /*

        Problems:
        1. Modifying the input array a — you're pushing b's elements into a which mutates the input. Generally a bad practice.
        2. Three separate loops — not wrong, but can be simplified.

        
        for(int i = 0; i < b.size(); i++) {
            a.push_back(b[i]);
        }
        
        unordered_set<int> st;
        for(int i = 0; i < a.size(); i++) {
            st.insert(a[i]);
        }
        
        vector<int> ans;
        for(int a : st) {
            ans.push_back(a);
        }
        
        return ans;

        */


        // Better approach:
        unordered_set<int> st;
        for(int i : a) {
            st.insert(i);
        }
        for(int i : b) {
            st.insert(i);
        }
        
        vector<int> ans(st.begin(), st.end());
        
        return ans;
    }
};