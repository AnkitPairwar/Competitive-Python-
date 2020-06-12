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

string dectobin(ll i){
    string r;
    while(i!=0) {r=(i%2==0 ?"0":"1")+r; i/=2;}
    return r;
}

string bin(ll a, int n ){
string s;
s =dectobin(a);
n -=s.length();
while(n!=0){s ="0" +s;n--;}
return s;
}

ll diff(string s1,string s2){
    int n =s1.length();
    ll diff=0;
    f(i,n){
        if(s1[i]!=s2[i]) diff++;
    }
    return diff;
}

int main() {
    test{
        ll n;
        cin >> n;
        int len_n = dectobin(n).length();
        ll sum=0;
        map<int,int> vals;
       for(int i =0;i<len_n; ++i){
                int r = pow(2,i);
                vals[i] = diff(bin(r,len_n) , bin(r-1,len_n));
                //cout << r <<endl;
                //cout  <<vals[i] <<endl;
        }
        for(int i=0;i<len_n;++i){
            
        }


        //sum += ceil(n/2)+1;
        //cout << sum << endl;
        /*
        int garb = len_n - (pow(,len_n));
        sum=2*n-garb; */
        for(int i =0;i<len_n; ++i){
                sum+=
                //cout << r <<endl;
                //cout  <<vals[i] <<endl;
        }
        
    
            //cout  <<diff(bin(i,len_n) , bin(i+1,len_n)) <<endl;          
    cout << sum << endl;
    }    
    return 0;

}
