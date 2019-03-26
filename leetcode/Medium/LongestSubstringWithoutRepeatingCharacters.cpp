#include <bits/stdc++.h>
using namespace std ;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> st ;
        int i = 0 , j = 0 , n = s.size() ;
        int ans = 0 ;
        while (j < n){
            if (!st.count(s[j])){
                st.insert(s[j++]) ;
                ans = max (ans , j - i) ;
            }else{
                st.erase(s[i++]) ;
            }
        }
        return ans ;
    }
}A;
int main(){
    cout << A.lengthOfLongestSubstring("pwwkew") ;
}