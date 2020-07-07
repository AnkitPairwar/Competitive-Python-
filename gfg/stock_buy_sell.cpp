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
#define fk(i,n,k) for(int i=0;i<n;i+=k)
#define fd(i,n) for(int i=n-1;i>=0;--i)
//#include <cstudio>
//"No Profit"
using namespace std;
int main() {
    test{
        int n;
        cin >> n;
        int ar[n];
        vector<int> ans;
        f(i,n) cin >> ar[i];

        bool buy = false;
        f(i,n-1)
        {
            if(!buy && ar[i] < ar[i+1]) 
                buy=true ,ans.pb(i);
            if(buy && ar[i] > ar[i+1])
                buy =false , ans.pb(i);
            if(buy && (i == n-2) && ar[i] < ar[i+1])
                buy =false , ans.pb(i+1);              
        }
        if(ans.size()>1)
        {
            fk(i,ans.size(),2)
            {
                cout <<"(" << ans[i]<<" "<<ans[i+1]<<") ";
            }
            cout << "\n";
        }
        else cout << "No Profit" <<endl;
        
    }
    return 0;

}
