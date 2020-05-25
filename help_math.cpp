#include <cmath>
#include <algorithm>
#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <map>
#include <queue>
//#include <cstudio>

using namespace std;
int main() {
    int cn=0;
    vector<int> num;
    string nums , ans;
    cin >> nums;
    int n =nums.size();
    for(int c=0 ; c<n;++c){
        
        if(nums[c]!='+' ) {
            int a = nums[c]-'0';
            num.push_back(a);
            }
    }
    sort(num.begin() ,num.end());
     // cout << num[0] << num[3];
    for(int c=0 ; c<n;++c){
        if(c%2==0){    
            char ch = char(num[cn++] +48);
            ans+=ch;
         }
         else ans+='+';    
    }
    cout << ans <<endl;
    return 0;

}
