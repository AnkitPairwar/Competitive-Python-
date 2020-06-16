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
        int n ;
        cin >> n;
        vector<int> arr;
        f(i,n){
            int t;cin >>t;arr.pb(t);
        }
        int count_e=0,count_o=0;
        f(i,n){
            if(i%2==0){
                 if(arr[i]%2!=0) count_e++;
                 }
            else 
            {if(arr[i]%2==0) count_o++;}
        }
        if(count_e == count_o){
        cout << count_o <<endl;}
        else{
            cout << -1<<endl;
        }
    }
    return 0;

}
