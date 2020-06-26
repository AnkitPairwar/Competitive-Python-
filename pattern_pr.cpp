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
#define f(i,n) for(int i=1;i<=n;++i)
#define fd(i,n) for(int i=n-1;i>=0;--i)
//#include <cstudio>

using namespace std;
int main() {
    int n;
  	cin >> n;
  	//2
  	//10 20 50 6 
    //** 30 4
  	//1
  	//10 2
  	vector<int> v;
  	f(i,n*(n+1)){
        //cout << i <<endl;  
    	v.pb((i)*10 );
    }
  	int beg =0,end= (n*(n+1));
  	for(int i=0;i<n;++i)
    { 

      for(int u = 0;u < i; ++u)
      {
        cout << "**";
      }    
      for(int j = 0;j < n-i; ++j)
      {
        if(n-i == j) break;
        cout <<v[beg++];
      }
      for(int k =0;k<n-i;++k)
      {  
        if(n-i== k) break;
        if(k == n-i-1) cout << v[end-n+k] /10;    
        else cout << v[end-n+k];
      }
      end-=n-1-i;
      cout <<endl;
    }
    return 0;

}