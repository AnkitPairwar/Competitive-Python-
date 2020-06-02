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
//#include <cstudio>

using namespace std;
int main() {
    int test_cases;
    cin >> test_cases;
    
    for(int i=0;i<test_cases;++i){
        int n,m, co ,ct,cost=0;
        cin >> n >> m >> co >> ct;
        vector<vector<char> > grid;
        for(int i=0;i<n;++i){
            vector<char> gr;
            for(int j=0;j<m;++j){
                char t;
                cin >>t;
                gr.push_back(t);
            }   
            grid.push_back(gr);
        }
        bool conc=false;
        int go=0;
        for(int i=0;i<n;++i){
        int bco=0,bct=INT_MAX;
            for(int j=0;j<m;++j){
                if(grid[i][j]=='.'){
                    bco+=co;
                    if(grid[i][j+1]=='.') conc=true;
                    if(conc){
                        bct=0;
                        bct+=ct;
                    }
                
                }
                else{
                    conc=false;
                    go=0;
                }        
            }
            cost += min(bco,bct);   
        }
        cout << cost <<endl;
    }

    
    return 0;

}
