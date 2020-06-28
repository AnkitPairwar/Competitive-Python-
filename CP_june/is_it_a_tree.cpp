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
int vis[10001]={0};

void dfs(int node){
    vis[node] =1;
    for(int child=0;child<graph[node].size();++child)
     if(vis[graph[node][child]]==0) {dfs(graph[node][child]);}
}

int main() {
    int n,e;
    cin >> n>>e;
    f(i,e){
        int a,b;
        cin>>a>>b;
        graph[a].pb(b);
        graph[b].pb(a);
    }
	int count=0;
    f(i,n){
        if(vis[i] ==0) {dfs(i);count++;}
    }
    
    if(count ==1 && e == n-1) cout << Y;
    else cout << N;

    return 0;

}