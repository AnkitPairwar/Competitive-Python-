#include <cmath>
#include <algorithm>
#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <map>
#include <queue>
//#include <cstudio>

using namespace std;
int main() {
    int test_cases;
    cin >> test_cases;
    


    for(int i=0;i<test_cases;++i){
        vector<int> granny;
        int n ;
        cin >> n;
        for(int i =0;i<n;++i){
            int t;
            cin>> t;
            granny.push_back(t);
        }
        sort(granny.begin() , granny.end());
        int cur=1,streak=0;
        bool yes =false;
        
        for(int j=0;j<n;++j){
            for(int i =j+1;i<n;++i){
            if(cur+streak>= granny[i]){
                yes =true;
                cur++;
            }
        }
        }
        cout<<cur<<endl;

    }

    
    return 0;

}
// 1 1 4 5 5 9