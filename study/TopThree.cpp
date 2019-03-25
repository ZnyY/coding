#include <bits/stdc++.h>
using namespace std ;
class Solution{
public:
    vector<int> nums ;

    void init(){
        for ( int i = 1 ; i <= 50 ; i++ )
            nums.push_back(rand()) ;
    }
    
    vector<int> TopThree(){
        vector<int> ans ;
        sort(nums.begin() , nums.end() , greater<int>()) ;
        ans = {nums[0] , nums[1] , nums[2]} ;
        return ans ;
    }
}A;
int main(){
    A.init() ;
    for ( int i = 0 ; i < A.TopThree().size() ; i++ )
        cout << A.TopThree()[i] << endl ;
}