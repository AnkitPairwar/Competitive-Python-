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
        int n,time,en,min_en;
        cin >> n >>time;
        int e[n];
        f(i,n) cin >> e[i];
        cin >> en >> min_en;
        
        if(n>time){
            cout << "NO" <<endl;
        }
        else{
            bool win =true,flag=true;
            f(i,n){
                if(e[i] <=en) en+=(en -e[i]);
                else{win=false;break;}
                   }
        if(en < min_en)flag =false;
        if(flag && win)  cout << "YES" <<endl;
        else cout << "NO" <<endl;
        }
    }    
    return 0;

}
