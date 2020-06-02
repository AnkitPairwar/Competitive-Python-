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
    int n,k,m;
    cin >> n >> m >> k;
    int hand = n / k , max_hd=0, sd_hd=0;
    bool yes =true;
    for(int i=0; i<2;++i){
        if (yes){max_hd = m>= hand?hand:m;
        m-=  max_hd;
        yes = false;
        k--;
        continue;
        }
        else if(m>0){
            
                sd_hd = ((float)m/ (float) k > 1 ? (int)ceil((float) m/(float) k) : 1);
        //cout << ceil(j) <<m/k<<endl;
  
            }
        else if(m==0){
            sd_hd =0;
        }  
        //cout <<(int)ceil((float) m/(float) k)<<endl;  
        //cout << sd_hd <<endl;
    }

    cout <<  max_hd - sd_hd<<endl;
    

    }

    
    return 0;

}
