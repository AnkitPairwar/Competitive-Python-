#include <bits/stdc++.h>
#include <iomanip>
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
        int cand,res;
        cin >> cand;
        res =floor((cand-1)/2);
        if(cand<3) cout << 0 << endl;
        else cout << res<< std::fixed<<endl; 
    }
    return 0;

}
