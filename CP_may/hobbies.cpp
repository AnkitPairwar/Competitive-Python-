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
#define fi(i,k,n) for(int i=k;i<n;++i)

//#include <cstudio>

using namespace std;
int main() {
    test{
        set<int> :: iterator itr;
        int n;
        bool found =false;
        cin >> n;
        set<int> s,k;
        vector<int> check;
        f(i,n){int t;
            cin>>t;
            s.insert(t);
            check.pb(t);
        }

        fi(i,1,1025){
            int val=0;

            for(itr = s.begin();itr!=s.end();++itr){
                k.insert(*itr);
            }

            f(j,n){
                int norm = check[j]^i; 
                if(k.find(norm)==k.end()){
                    val=1;
                    break;
                } 
                else k.erase(k.find(norm));
            }

            if(val == 0) {
                cout<<i<<endl;
                found =true;
                break;
            }   
           // cout << val;
            //if(val>0) cout << val <<endl;
        }
        if(!found) cout <<"-1"<<endl;

    }    
    return 0;

}
