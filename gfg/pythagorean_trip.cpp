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

//1 3 4 5 6
//a     b c 

bool trip_p (int ar[] ,int n )
{
    if(n ==1 || n == 2)return false;
    std::sort(ar , ar+n);
    f(i , n)
    {
        int lf_ind = 0  , fs_ind = n-1-i , rt_ind=fs_ind - 1 ;
        while(lf_ind < rt_ind)
        {   
            if(ar[lf_ind] + ar [rt_ind] == ar[fs_ind]) return true;

            ar[lf_ind] + ar[rt_ind] > ar[fs_ind] ? rt_ind-- : lf_ind++ ;
        }

    }
    return false;

}

using namespace std;
int main() {
    test{
        int n;
        cin >> n;
        int ar[n];
        f(i,n) 
        {
            int t;
            cin >> t ;
            ar[i] =t*t;
        }
        if(trip_p(ar , n)) cout << Y <<endl;
        else cout << N <<endl;
    }    
    return 0;

}
