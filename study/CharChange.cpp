/*warning: ISO C++ forbids converting a 
string constant to 'char*' [-Wwrite-strings]*/
#include <bits/stdc++.h>
using namespace std ;
void change(char* &a , char* &b){
    char *x = a ;
    a = b ;
    b = x ;
}
int main(){
    char *gm = "good morning" ;
    char *ga = "good afternoon" ;
    change(gm , ga) ;
    cout << gm << endl << ga << endl ;
    return 0 ;
}