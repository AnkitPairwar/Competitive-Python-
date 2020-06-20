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
int gcd(int a,int b){
    if(b == 0) return a;
    return gcd(b,a%b);
}


using namespace std;
int main() {
    test{
        int n,res=1;
        cin >> n;
//        map< pair<int ,int> ,int> dp;
    //    dp[{1,2}] =1;
  //      dp[{1,3}] =1;
      //  dp[{2,3}] =1;
     /*   for(int i=1;i<=n;++i){
            int val=0;
            for(int j=i+1;j<=n;++j){
        //        if(dp.find({i,j}) == dp.end() ) dp[{i,j}] = gcd(i,j);
                val = max(val ,gcd(i,j) );
            }
            res = max(res , val);
        }*/
        res = n%2 == 0? (n/2) : ((n-1)/2);
        cout << res <<endl;
    }
    return 0;

}
