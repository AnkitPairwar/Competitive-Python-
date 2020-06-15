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
#include <unordered_map>
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

        int n,x,sum=0,max_strk=0,curr_strk=0;vector<int> arr;
        cin >> n >> x;
        int m[n];
        f(i,n){
        int t;cin >>t;arr.pb(t);
        }

        f(i,n){
            sum+=arr[i];
            m[i] =sum%x;
        }

        unordered_map<int, int>um;
        f(i,n){
            if(m[i] != 0) curr_strk++;
            else if(um.find(m[i]) == um.end()) um[m[i]] =i;
            else
            {max_strk=max_strk>i-um[m[i]]?max_strk:1-um[m[i]];
        }
        max_strk =(max_strk,curr_strk);
        }

        if(max_strk!=0)cout << max_strk <<endl;
        else {max_strk =-1;cout<<max_strk<<endl;}
    }
    return 0;

}
