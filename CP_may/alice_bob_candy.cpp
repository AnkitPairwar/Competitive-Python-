#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i =0; i<t;++i){
        long n , k ;
        cin >> n>> k;
        cout <<fixed<<k + (int)floor((k - 1) / (n - 1))<< "\n"; ;
    }
}