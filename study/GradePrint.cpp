#include <bits/stdc++.h>
using namespace std ;
class Grade{
public:
    vector<int> grade ;
    inline void init(){
        for ( int i = 1 ; i <= 10 ; i++ ){
            grade.push_back( rand()%100 ) ;
        }
    }
}cs[6];
int main(){
    for ( int i = 1 ; i <= 5 ; i++ ){
        cs[i].init() ;
        cout << i << "班同学的成绩为: " ;
        for ( int j = 0 ; j < cs[i].grade.size() ; j++ )
            printf("%-3d " , cs[i].grade[j]) ;
        cout << endl ; 
    }
    cout << "输出完毕！" << endl ;
    return 0 ; 
}