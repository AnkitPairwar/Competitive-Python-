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
    int n ;
    cin >> n;
    int ar[n];
    f(i,n) cin>> ar[i];
    int len = 1 ,cnt=1;
    sort(ar ,ar+n);
    f(i,n -1)
    {
        if(ar[i] +1 == ar[i+1]) cnt++;
        else cnt =1;
        len = max(len ,cnt );
    }    
    cout << len<<endl;
    return 0;

}
