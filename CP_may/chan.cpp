
//#include <algorithm>
//#include <stdio.h>
//#include <string>
#include <iostream>
#include <vector>
//#include <map>
//#include <queue>
//#include <cstudio>

using namespace std;
int main() {
    int n,x,tot=0;
    vector<int> day;
    cin >> n>>x;
    for(int i=0;i<n;++i){
        int t;
        cin>>t;
        tot+=t;
        for(int j=1;j<=t;++j){
            day.push_back(j);
        }
    }


    
    int sum=0,cur_max=day[0];
    for(int i=0;i<tot;i++){
        if(i>=x) sum+= day[i] - day[i-x];
        else sum+=day[i];
        //cout <<endl<<i;
        cur_max = max(cur_max,sum);
    }
    for(int i=0;i<x;i++){
        sum+= day[i] - day[tot-x+i];
        cur_max = max(cur_max,sum);
    }

    cout << cur_max << endl;

    
    return 0;

}
