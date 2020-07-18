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

int goods (string s ,  char c , int n)
{
    int ct1=0 , ct2=0;
    if(n == 2) {
        if(s[0] == c && s[1] == c++) return 0;
        if(s[0] == c || s[1] == c++) return 1;
        else return 2;
          
    }
    
    f(i,n)
    {
        if(s[i] ==c && i<n/2) ct1++;
        else if(s[i] ==c) ct2++;
    }
    
    if(ct1 >=ct2)
        {
            return (n/2 -ct1) + goods(s.substr(n/2 , n) , c++ ,n/2) ;
        }
    else{
            return (n/2 -ct2) + goods(s.substr(0 , n/2) , c++ ,n/2) ;
    }    
    
}


int main() {
    test{
        int n; 
        cin >> n;
        string s;
        cin >> s;
        cout << goods( s , 'a' , n) << endl;

    //a =97
    }
    return 0;

}
