#include <bits/stdc++.h>
using namespace std ;
class Solution{
public:
    void judge(string ss){
        string cpy = ss ;
        reverse(ss.begin() , ss.end()) ;
        if (ss != cpy) cout << "No , it isn't !" << endl ;
        else cout << "Yes , it is !" << endl ;

        return ;
    }
};
int main(){
    string ss ;
    cin >> ss ;

    Solution X ;
    X.judge(ss) ;
    return 0 ;
}