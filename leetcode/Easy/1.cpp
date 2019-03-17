//https://leetcode.com/problems/two-sum/
//author:zhangyi
#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans ;
        for (int i = 0 ; i < nums.size() ; i++ ){
            for ( int j = i + 1 ; j < nums.size() ; j++ )
                if (nums[i] + nums[j] == target){
                    ans = {i , j} ;
                    break ;
                }
            if (ans.size()) break ;
        }
        return ans ;
    }
};

int main(){

}