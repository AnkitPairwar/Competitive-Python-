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
    int n,k;
    cin >> n >>k;
    int a[n],b[n];
    f(i,n){
        cin >>a[i];
    }

    f(i,n){
        cin >>b[i];
    }    

    int sum =0,mi;
    f(i,n){
        int opt_prod; 
        if(k>0) {opt_prod = min( (a[i] * b[i]) , min((a[i] -2*k) * b[i] ,(a[i] +2*k) * b[i]));
//         if(opt_prod != a[i] * b[i]) k=0;}
    mi = min(mi , opt_prod);
        

    }
        sum +=mi;
    cout << sum;
    return 0;

}
