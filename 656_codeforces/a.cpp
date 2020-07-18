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
        ll ar[3] ;
        f(i,3) cin >> ar[i];
        sort(ar , ar+3);
        if(ar[1] == ar[2] && ar[2]==ar[0])
        {
            cout << Y << endl;
            cout << ar[0]<<" " <<ar[0] <<" "<<ar[0] <<endl;    
        }
        else if((ar [1] == ar[2]) && (ar[1] > ar[0]) && (ar[0] ==1))
        {
            cout << Y <<endl;
            cout << ar[0] <<" " << ar[0]<<" " <<ar[2]<<endl;
        }
        else if((ar [1] == ar[2]) && (ar[1] > ar[0]))
        {
            cout << Y <<endl;
            cout << ar[0]-1 <<" " << ar[0]<<" " <<ar[2]<<endl;
        }
        else{
            cout << N <<endl;
        }

    }
    return 0;

}
