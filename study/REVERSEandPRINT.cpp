#include <bits/stdc++.h>
using namespace std ;
void change(char* &a){
    int size = strlen(a) ;
    for ( int i = 0 ; i < size/2 ; i++ ){
        char x = a[i] ;
        a[i] = a[size - i - 1] ;
        a[size - i - 1] = x ;
    }
}
int main(){
    char str[] = "good morning" ;
    char *gm = str ;
    change(gm) ;
    cout << gm << endl ;
    return 0 ;
}