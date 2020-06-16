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
        string s ,a="";
        cin >> s;
        //cout << s[0]+s[1]<<endl;
        int n = s.size();
        for(int i=0;i<n;i+=2){
            if(i==0){
                a+=s[0];
                a+=s[1];
            }
            else{
                a+= s[i+1];
            }
               
        }
        cout <<a<< endl;
    }

    return 0;

}
