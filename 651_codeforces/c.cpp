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
#define AS "Ashishgup"
#define FF "FastestFinger"
//#include <cstudio>
std::vector<int> odd_div(int n){
    std::vector<int> v;
    for(int i=2;i<n/2;++i){
        if(n%i ==0) if(i%2 !=0) v.pb(i); 
    }
    //if(n%2!=0)v.pb(n);
    return v;
};

//std::map<int,char> res;


using namespace std;
int main() {
    //res[1] = 'l';
    //res[2] = 'v';
    test{
        int n;
        char win ='a',chance ='a';
        cin >> n;
        if(n == 1)win ='f';
        else if (n ==2) win = 'a';
        else if(n%2 != 0) win ='a';
        else if(n%2==0 && n!=2){
            while(n!=1 && n!=2){
                //cout<<"e"<<endl;
                vector<int> odd = odd_div(n);
                int odd_len = odd.size();
                bool div=false;
                
                if(n%2 != 0) {win =chance;break;}
                else{
                    if(odd_len == 0) {
                        win = chance =='a'?'f':'a';
                        break;
                        }
                    else{bool not_2=true;
                        f(i,odd_len){
                            if(n/odd[i]!=2) {n=(n/odd[i]);not_2=false;}  
                        }
                        if(not_2) n=(n/odd[0]);
                        div=true;
                        cout<<n<<endl;
                    }
                }
                if(!div) {n--;}
                chance= chance =='a'?'f':'a';
            } 
        }

        if(win =='a') {cout << AS << endl;}
        else {cout << FF << endl;}
        
        }
    return 0;

}
