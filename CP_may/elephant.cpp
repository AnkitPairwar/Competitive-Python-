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
    int dist,step=0;
    cin >> dist;
    while(dist!=0){
        if(dist>=5) { step = dist/5; dist = dist%5;}
        else if(dist==4){dist-=4; step++;}
        else if(dist==3){dist-=3; step++;}
        else if(dist==2){dist-=2; step++;}
        else {dist--;step++;}
    
    
    
    }


    cout << step;
}
