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
#define ll long long
#define test int t;cin>> t;while(t--)
#define Y "Yes"
#define N "No"
#define pb push_back
#define pp pop_back
#define f(i,n) for(int i=0;i<n;++i)
#define fd(i,n) for(int i=n-1;i>=0;--i)
//#include <cstudio>

using namespace std;
int main() {
    test{
        int n,ans;
        vector<int> v,res_v;
        cin>>n;
        f(i,n){
            int t;cin>>t;v.pb(t);
        }
        f(i,n){
            if(i == 0 || i == n-1 || (v[i]>v[i-1] && v[i] >v[i+1]) || (v[i]<v[i-1] && v[i]<v[i+1])){
                res_v.pb(v[i]);
            }
        }
        ans = res_v.size();
        cout << ans << endl;
        f(i,ans){
            cout <<res_v[i] << " ";
        }
        cout <<"\n";
    }
    
    return 0;

}
