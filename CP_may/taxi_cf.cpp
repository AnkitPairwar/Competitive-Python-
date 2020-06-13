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
    int n ,ones=0,twos=0,threes=0,fours=0 ,crs=0;
    cin >> n;
    f(i,n){
        int t; cin >>t;if(t==1)ones++;if(t==2)twos++;if(t==3)threes++;if(t==4) fours++;
    }
    if(ones>0&&threes>0){
        if(ones>threes){ crs+=threes;ones-=threes;threes=0;}
        else {crs+=ones;threes-=ones;ones=0;}
    }
    //cout<<threes<<endl;
    
    if(ones>0&&twos>0){
        if(twos*2<=ones) {crs+=twos;ones-=2*twos;twos=0;}
        else {crs+=floor(ones/2);twos-=floor(ones/2);ones=0;}
    }
    //cout<<crs<<endl;
    
    if(twos>=2){crs+=twos/2;twos%=2;}
    else if(twos!=0) crs++;
    //cout<<crs<<endl;
    
    if(ones>=4){crs+=ones/4;ones%=4;}
    else if(ones!=0) crs++;
    //cout<<crs<<endl;
    
    crs+=+threes+fours;
    
    cout<<crs<<endl;
    return 0;
}
