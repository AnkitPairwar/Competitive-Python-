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
//shovel -> 2st ,1di ; sword ->1 st , 2 di  ; 1 em -> 1sw || 1sh
using namespace std;
int main() {
    
    test{
        int  stk , dmd , emd=0;
        cin >> stk >> dmd ;
        while(stk >0 && dmd >0){
            if(stk/2 >=dmd){
                emd+=dmd;
                break;
            }
            else if(stk >dmd){
                emd+=stk/2;
                break;
            }

            if(dmd/2>=stk){
            emd+=stk;break;
            }

            else{
                emd+=dmd/2;
                break;
            }
            
            
            if(stk == dmd) {
                if(stk==1)break;
                if(stk==2){emd+=1;break;}
                if(stk ==3){emd+=2;break;}
                else{
                    if(stk%3 ==0){
                        emd+=(stk/3)*2;
                        break;
                    }
                    else if(stk%3 ==2){
                        emd+=((stk-2)/3)*2 +1;
                        break;
                    }
                    else if(stk%3 ==1){
                        emd+=((stk-1)/3)*2;
                        break;       
                    }
                }

            }
            
        }


    cout << emd << endl;
    }

    
    return 0;

}
