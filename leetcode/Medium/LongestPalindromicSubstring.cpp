//https://leetcode.com/problems/longest-palindromic-substring/
//author:zhangyi
#include <bits/stdc++.h>
using namespace std ;
class Solution {
public:
    int flagj = 0 ;
    int maxn = -1 ;
    string maxString ;

    bool isReverse(string s , int x , int y){
        int sz = y - x + 1 ;
        for ( int i = x ; i < x + sz/2 ; i++ ){
            if (s[i] != s[y - (i - x)])
                return false ;
        }
        return true ;
    }
    string longestPalindrome(string s) {
        for ( int i = 0 ; i < s.size() ; i++ ){
            int flag = 0 ;
            for ( int j = s.size() - 1 ; j >= i ; j-- ){
                if (flag) break ;
                if (j < flagj) break ;
                if (s[i] == s[j]){
                    if (isReverse(s , i , j) && j - i + 1 > maxn){
                        //cout << 1 << endl ;
                        maxn = j - i + 1 ;
                        maxString = s.substr(i , j - i + 1) ;
                        //cout << maxString << endl ;
                        //break ;
                        flag = 1 ;
                        flagj = j ;
                    }
                }
            }
        }
        //cout << maxString << endl ;
        return maxString ;
    }
}A;
int main(){
    cout << A.longestPalindrome("abcdabcdadc") ;
}
