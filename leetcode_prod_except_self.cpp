#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int ind = 1,n=nums.size();
        for(int i=0;i<n;i++){
            if(i>0){
                ind *= nums[i-1];
            }
            ans.push_back(ind);
        }
        ind = 1;
        for(int x=n-1;x>=0;x--){
            ans[x] *= ind;
            ind *=nums[x];
        }
        return ans;
        
    }
    
};