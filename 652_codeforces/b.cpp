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
        int n,opr,one=0,zero=0;
        cin >>n;
        string s;
        cin >> s;
        bool start=true,end=false,mid=false;
        int st=1,en=0,md=0;
        f(i,n){
            if(start){
                if(s[i]=='1'){
                    start =false;end=true;st=i;
                } 
            }
            if(end){
                if(s[i]=='0'){
                    mid=true;end=false;md=st;en=0;
                }
            }
            if(mid){
                if(s[i]=='1'){
                    mid=false;end=true;en=i;
                }
            }
            

        }
//        cout <<st<<" "<<md<<" "<<en<<" "<<endl;
        if(end)s.erase(s.begin()+md,s.end()-(n-en+1));
        if(mid){
                if(st==0)
                {
                s="0";
                }
                else if(st!=0){
                s.erase(s.begin()+st,s.end()-1);
                }
                
            }
        cout<<s<<endl;
    }
    return 0;

}
