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
    int n,sum=0,val=0,cnt=0;vector <int> coins;
    cin >> n;
    f(i,n){
        int t;cin >> t ; coins.pb(t);
        sum+=t;
    }    
    //cout << floor(sum/2);
    sort(coins.begin(),coins.end());
    fd(i,n){
        //cout << val << endl;
        if((val+=coins[i]) > (sum/2)){ cout << ++cnt <<endl; break;}
        else cnt++;
    }

    return 0;

}
