#include <bits/stdc++.h>
using namespace std ;
int x ;
int* sum(int a[]){
    int* ptr = &x ;
    x = (a[0]+a[1]+a[2]) ;
    return ptr ;
}
int main(){
    int a = 3 ;
    int& b = a ;
    b = 6 ;
    int a2 = 9 ;
    int &b = a2 ;
    cout << a << endl ;
    return 0 ;
}