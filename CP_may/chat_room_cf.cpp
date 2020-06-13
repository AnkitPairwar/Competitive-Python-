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
    
    string s;
    cin >> s;
    string h = "hello";
    int n = s.length(),ind =0;
    f(i,n){
        //cout << s [i] <<" " <<h[ind] << endl;
        if(s[i] == h[ind]) {
            ind++;
            if(ind ==5) break;
            else continue;
        }
        
    }
    if(ind ==5) cout << Y <<endl;
    else cout << N << endl;
        
    return 0;

}
