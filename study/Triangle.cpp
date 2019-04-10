#include <bits/stdc++.h>
using namespace std ;
class Triangle{
private:
    double bottom , high ;
public:
    explicit Triangle(double _bottom , double _high)
        : bottom(_bottom) , high(_high)
    {}
    double hypot(){
        return sqrt(bottom*bottom + high*high) ;
    }
    double area(){
        return bottom * high * 0.5 ;
    }
};
int main(){
    Triangle A(3 , 4) ;
    cout << A.area() << endl << A.hypot() << endl ;
    return 0 ; 
}