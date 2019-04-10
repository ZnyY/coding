#include <bits/stdc++.h>
using namespace std ;
class Rectangle{
private:
    int area , a , b ;
public:
    inline bool operator < (const Rectangle& rhs) const {
        return area < rhs.area ;
    }
    void init(int _a , int _b){
        a = _a , b = _b ;
        area = a * b ;
    }
    int Area(){
        return area ;
    }
} ;

Rectangle compare(Rectangle A[] , int n){
    sort(A , A + n - 1) ;
    return A[2] ;
}

int main(){
    Rectangle A[3] ;
    for ( int i = 0 ; i <= 2 ; i++ ){
        int a , b ; cin >> a >> b ;
        A[i].init(a , b) ;
    }
    Rectangle res = compare(A , 3) ;
    cout << res.Area() ;
    return 0 ;
}