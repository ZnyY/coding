//https://leetcode.com/problems/string-to-integer-atoi/
//author:zhangyi
#include <bits/stdc++.h>
using namespace std ;
class Solution {
public:
    const int maxn = 2147483647 ;
    const int minn = -2147483648 ;
    long long myAtoi(string str) {
        int pos = 0 , end = 0 ; 
        int flag = 0 ;
        for ( int i = 0 ; i < str.size() ; i++ ){
            if (pos == 0 && str[i] != ' ' && (str[i] < '0' || str[i] > '9'))
                if(str[i] != '-' && str[i] != '+') {
                    return 0 ;
                }else{
                    if (str[i + 1] >= '0' && str[i + 1] <= '9')
                        if (str[i] == '-') flag = 1 ;
                        else flag = 0 ;
                    else return 0 ;
                }
            if (str[i] == ' ' && pos == 0) continue ;
            //if (pos == 0 && str[i] == '-' && str[i + 1] >= '0' && str[i + 1] <= '9') flag = 1 ;
            //if (pos == 0 && str[i] == '+' && str[i + 1] >= '0' && str[i + 1] <= '9') flag = 0 ;
            if (pos == 0 && str[i] >= '0' && str[i] <= '9'){
                pos = i + 1 ; 
                continue ;
            }
            if ( (str[i] < '0' || str[i] > '9') || str[i] == ' ' ){
                if (pos != 0){
                    //cout << str[i] << endl ;
                    end = i ;
                    //cout << end << endl ;
                    break ;
                }
            }
        }
        if (pos == 0 && end == 0) return 0 ;

        pos-- ;
        if (end == 0) end = str.size() - 1 ;
        else end-- ;

        int temp = pos ;
        for ( int i = temp ; i <= end ; i++ )
            if (str[i] == '0')
                pos++ ;
            else break ;

        //cout << pos << endl << end << endl ;
    
        if (end - pos + 1 > 10){
            if (flag) return minn ;
            return maxn ;
        }

        long long num = 0 ;
        for ( int i = pos ; i <= end ; i++ ){
            num = num * 10 + str[i] - '0' ; 
        }
        if (flag) num = -1 * num ;
        if (num > maxn) return maxn ;
        if (num < minn) return minn ;
        int ans = (int)num ;
        return ans ;
    }
}A;
int main(){
    string ss ; getline(cin , ss) ;
    cout << A.myAtoi(ss) ;
}