#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;


class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int res = 0,sum = 0;
        unordered_map<int,int> m;
        m[0] = 0;
        for(int x=0 ;(int) x< nums.size() ;++x){
            sum+=(nums[x]==0?-1:1);
            auto it = m.find(sum);
            if(it!=m.end()){
            res = max(res , x+1-m[sum]);     
            } 
            else{
                m[sum] = x+1;
            }
           }
        return res;
    }
};