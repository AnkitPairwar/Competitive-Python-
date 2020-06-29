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
#define f(i,n) for(int i=1;i<=n;++i)
#define fd(i,n) for(int i=n-1;i>=0;--i)
#define endl "\n"
//#include <cstudio>
using namespace std;
std::map<int, std::vector<int> > graph;
int vis[2001]={0};
int col[2001];
bool dfs(int node ,int colt){
    vis[node] =1;
    col[node] =colt;
    for(int child=0;child<graph[node].size();child++)
     {
         if(vis[graph[node][child]] ==0){if(!dfs(graph[node][child] , colt^1)) return false;}
         else{
             if(col[graph[node][child]] == col[node]) return false;
         }
     }
     return true;
}

int main() {
    int ind=1;
    test{
        int n,e;
        cin >> n>>e;
        f(i,n)graph[i].clear(),vis[i]=0;
             
        
        f(i,e){
            int a,b;
            cin>>a>>b;
            graph[a].pb(b);
            graph[b].pb(a);
        }
        bool bip =true;
        f(i,n){
            if(vis[i] == 0) if(dfs(i,0)==false) {bip=false ;break;}
        }
        cout <<"Scenario #"<< ind<<":"<<endl;
        if(bip) cout<<"No suspicious bugs found!"<<endl;
        else cout<<"Suspicious bugs found!"<<endl;
        ind++;

    }
    return 0;

}