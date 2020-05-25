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
    int n  ,val =0;
    string s;
    cin >> n;
    for(int i=0;i<n;++i){
        cin >>s;
        if(s == "++X") ++val;
        else if(s == "X++") val++;
        else if(s == "--X") --val;
        else if(s == "X--") val--;
        //cout << val;
        //cout << s;
    }
    cout << val;

return 0;
}
