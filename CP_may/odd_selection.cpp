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
        int n,x;
        bool possible = false;
        cin >> n >> x;
        int arr[x];
        bool used[x];
        for(int i=0;i<n;++i){
            int t;
            cin >>t;
            arr[i] = t;

        }
        
        
        for(int i=1;i<pow(2,n);i++)
        {
            
        vector<int> v;
        int x=i; // x=8
        while(x>0)
        {
            int z = x%2;  //  0  0  0   1
            v.push_back(z);
            x=x/2;  // 4  2  1 0
        }
        int p  = n- (int)v.size();
        for(int j=1;j<=p;j++)
        {
            v.push_back(0);
        }
        reverse(v.begin(), v.end());
        int count=0;

        for(int i=0;i<v.size();i++)
        {
            if(v[i]==1)
                count++;
        }
int sum=0;
        if(count==x)
        {
            for(int i=0;i<v.size();i++)
            {
                if(v[i]==1)
                {
                    sum+=arr[i];
                }
            }
        }
        v.clear();
        cout <<sum<<endl;
        //if(sum%2==0) {possible =false;}
        //else{possible=false; break;} 
    }   
        
    //cout <<subsetSums(arr,0,n-1)<<endl;

    cout<< (possible?"YES":"NO") <<endl ;
    //cout <<endl;


    }
    
    return 0;

}
