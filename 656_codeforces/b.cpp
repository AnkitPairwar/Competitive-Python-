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
        set<int> s;
        int n;
        cin >> n;
        int ar[2*n],ans[n],ct=0 ;
        f(i,2*n) cin >> ar[i];
        f(i,2*n)
        {
            if(s.find(ar[i]) == s.end()) 
            s.insert(ar[i]),ans[ct++]=ar[i];
        }
        f(i,n) cout <<ans[i] <<" ";
        cout <<"\n";
    }    
    return 0;

}
