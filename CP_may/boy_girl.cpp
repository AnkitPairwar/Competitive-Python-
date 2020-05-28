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
    string name;
    cin >> name;
    set<int> ans;
    map <int,int> m;
    
    for(int i=0;i<26;++i){
        char c = 'a' - i;
        m[c] = 0;
    }

    for(int i=0;i<name.size();++i){
        if(m[name[i]]==0){
            ans.insert(name[i]);
            m[name[i]]++;
        }
    }
    ans.size()%2==0?cout <<"CHAT WITH HER!":cout<<"IGNORE HIM!";
    
    return 0;

}
