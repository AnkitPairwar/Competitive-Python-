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

int sumnotdivbyx(int sum , int x,int l){
    if(sum % x  != 0) return l;
    else return -1;
}


using namespace std;
int main() {
    test{
        int n,x,tot_sum=0,ans,s;
        cin >> n >> x;
        vector<int> v;
        f(i,n){
            int t;cin>>t;v.pb(t);tot_sum=(tot_sum+t);
        }
        if(tot_sum%x!=0) cout << n << endl;
        else{
            int ans =-1, sum=tot_sum;
            f(i,n){
                if((sum-v[i])%x!=0) {//cout <<n-i-1 <<"es" <<endl;
                ans = n-i-1;break;} 

            }
            fd(i,n){
                if((sum-v[i])%x!=0) {//cout <<"no" <<endl;
                ans = max(ans,i);break;}    
            }
            cout << ans << endl;
        }

        //if(max_l!=0)cout << max_l <<endl;
        //else cout << -1<<endl;
    }

    return 0;

}
