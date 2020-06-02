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
#define ll long long 
#define ld long double 

using namespace std;
int main() {
    int test_cases;
    cin >> test_cases;
    
    while(test_cases--){
        ll h,c,t;
        cin >> h >> c >> t;
        if(2*t <= h+c) cout << 2 <<endl;
        else if(t == h) cout << 1 << endl;
        else{
            ll x = (t-c) / (2*t -c -h) ;
            ll y = x+1;
            ld p1 = ((h*x) + (c*(x-1))) /  1.0 *( 2 * x -1) ;
            ld p2 = ((h*y) + (c*(y-1))) / 1.0 *( 2 * y -1) ;
            cout <<(ld)((h*y) + (c*(y-1))) / (ld) 1.0 *( 2 * y -1)<<endl;
            (ld)abs(p1-t) == min((ld)abs(p1-t),(ld)abs(p2-t))?
                                        cout << 2 * x -1 <<endl:
                                        cout << 2 * y -1 <<endl;   
        }

    }
    
    return 0;

}
