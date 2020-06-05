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
int main() {
    test{
        ll num , des_val;
        cin >> num >> des_val ;
        if(num == des_val) cout << "0" << endl;
        else if(num%2 != 0 && num > des_val)
                cout << "-1"<< endl;
        else{            
        int step=0;            
        
            if(num>des_val){   
                while(num!=des_val){
                
                    if(num/2 == des_val && num %2 == 0){
                        step++;
                        break;
                    } 
                    else if(num/4 == des_val && num %4 == 0){
                        step++;
                        break;
                    }
                    else if(num/8 == des_val && num %8 == 0){
                        step++;
                        break;
                    }
                    else{
                        if(num%8 == 0) num/=8;
                        else{ step=-1;break;}

                    }   

                if(num < des_val){
                    step=-1;
                    break;
                }
                step++;
                
                }
        
        }
            else{
                while(num!=des_val){
                    if(num*2 == des_val){
                        step++;
                        break;
                    } 
                    else if(num * 4 == des_val){
                        step++;
                        break;
                    }
                    else if(num * 8 == des_val){
                        step++;
                        break;
                    }
                    else{
                        num*=8;
                        step++;
                    }

                 if(num > des_val){
                    step=-1;
                    break;
                }
                
                }
        }
        
        cout << step<<endl;
   
        }
    }
    
    return 0;

}
