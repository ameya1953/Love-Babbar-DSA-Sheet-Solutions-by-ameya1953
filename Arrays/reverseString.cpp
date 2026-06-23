#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string reverseString(string& s) {
        // code here
        stack<char> st;
        for(int i = 0; i < s.size(); i++) {
            st.push(s[i]);
        }
        
        string ans;
        for(int i = 0; i < s.size(); i++) {
            ans = ans + st.top();
            st.pop();
        }
        
        return ans;
    }
};
