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
        int n ,k , tbl_emp=0,str_ind=0;
        string s;
        cin >> n >> k;
        cin >> s;
        f(i,n){
            if(s[i] =='1'){ str_ind=i;break;}
        }
        if(str_ind <k){
        for(int i =str_ind ; i<n ; i+=k+1){
            if(s[i] == '0') tbl_emp++;
            }
        }
        else{
         for(int i=0 ; i<n ; i+=k+1){
            if(s[i] == '0') tbl_emp++;
            }   
        }
        if(tbl_emp == 0) cout << 0 << endl;
        else cout << tbl_emp << endl;
    }    
    return 0;

}
