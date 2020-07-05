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
        int n ;
        cin >> n;
        int ar[n];
        f(i,n) cin >> ar[i];
        bool acc =true,new_zone=false;
        int min_g =INT_MAX,last_min =INT_MAX;
        for(int i=0;i<n-1;i++){
            min_g = min (min_g , ar[i]);
            if(!acc)
            {
                if(ar[i] < ar[i+1]) new_zone =true;
                if(new_zone) if(last_min < ar[i+1] ) 
                {
                    min_g = ar[i+1];
                    last_min = ar[i]; 
                    acc=true;
                } 
            }

            if(ar[i] > ar[i+1]) 
            {
                new_zone=false;
                acc =false;
            }
            if(i == n-2 && new_zone && !acc) 
            {
                if(last_min > ar[i+1]) acc =true;
                else acc =false;
            }
             
            
        }

        if(acc) cout << Y <<endl;
        else cout << N << endl;
    }    
    
    return 0;

}
