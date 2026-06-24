#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        
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
    }
};