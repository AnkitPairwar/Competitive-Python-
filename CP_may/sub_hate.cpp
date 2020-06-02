#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <set>
//#include <cstudio>

using namespace std;
int main() {
    int test_cases;
    cin >> test_cases;
    
    for(int i=0;i<test_cases;++i){
        string bits;
        int ones=0,zeroes=0,ans;
        int n = bits.length();
        char op = bits[0],end[n-1];
        if(op=='0'&& end =='0'){
            for(int i;i<n;++i){
                bits[i] == '0'?++zeroes:++ones;
            }
        }
        else if(op=='0'&& end =='0'){
            for(int i;i<n;++i){
                bits[i] == '0'?++zeroes:++ones;
            }
        }
        else if(op=='0'&& end =='0'){
            for(int i;i<n;++i){
                bits[i] == '0'?++zeroes:++ones;
            }
        }
        else{
            for(int i;i<n;++i){
                
                bits[i] == '0'?++zeroes:++ones;
            }
        }


        cout << ans <<endl;    
    }

    
    return 0;

}
