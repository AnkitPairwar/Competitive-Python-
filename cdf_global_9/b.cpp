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
#define Y "YES"
#define N "NO"
#define pb push_back
#define pp pop_back
#define f(i,n) for(int i=0;i<n;++i)
#define fd(i,n) for(int i=n-1;i>=0;--i)
//#include <cstudio>

using namespace std;
int main() {
    test{
        int n , m;
        cin >> n>>m;
        int ar[n][m];
        f(i,n)f(j,m) cin >> ar[i][j];
        bool pos=true;
        f(i,n){
            if(!pos) break;
        f(j,m){
            
            if((i == 0 || i == n-1) && (j == 0 || j == n-1)){
                if(ar[i][j] > 2) pos =false;break;
            }
            } 
        }

        
    if(pos) cout<< Y << endl;
    else cout << N << endl;

    if(pos) {
        //cout <<  << endl;
    }

    }    
    return 0;

}
