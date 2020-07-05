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
        int n;
        cin >> n;
        ll ar[n];
        f(i,n) cin >> ar[i];
        for(int i=1; i <n-1; ++i)
        {
            //if((ar[i+1] - ar[i] > 0 && ar[i] -ar[i-1] > 0) || (ar[i+1] - ar[i] < 0 && ar[i] -ar[i-1] < 0))
            if(ar)
            ar[i] = ar[i] * (-1) ;
        }


        f(i,n) cout  << ar[i] << " ";

        cout <<endl;
    }
    return 0;

}
