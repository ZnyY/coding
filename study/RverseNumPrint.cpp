#include <bits/stdc++.h>
using namespace std ;
class Solution{
public:
    int num ;
    void read(){
        cin >> num ;
    }
    vector<int> Reverse(){
        vector<int> ans ;
        while (num > 0){
            ans.push_back(num - num / 10 *10) ;
            num = num / 10 ;
        }
        return ans ;
    }
    void print(vector<int> ans){
        for ( int i = 0 ; i < ans.size() ; i++ )
            cout << ans[i] ;
        return ;
    }
}X;

int main(){
    X.read() ;
    X.print(X.Reverse()) ;
    return 0 ;
}