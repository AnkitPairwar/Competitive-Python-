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
    int n;vector<int> ace;
    cin >>n;
    string s;
    cin>> s;
    map<char ,int> m;
    vector<char> v;
    v.pb('z');v.pb('e');v.pb('r');v.pb('o');v.pb('n');
    f(i,n){
        ++m[s[i]];
    }
    f(i,m['e']){
        if(m['n']>0){ cout <<1<<" " ; --m['n'];}
        else  cout <<0<<" " ;
    }
    return 0;

}
