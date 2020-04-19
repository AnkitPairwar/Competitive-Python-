#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main() {
int test_cases,N,D;
vector<int> answer;
cin >> test_cases;
for(int i=0;i<test_cases;i++){
    N=0;D=0;
    int res = 1;
    scanf("%d%d",&N,&D);
    vector<int> routes; //   
    for(int j=0 ;j<N ; j++){
        int r;
        scanf("%d",&r);
        routes.push_back(r);
    }
    //sort(routes,routes.size());
    //res = dp(routes,D);
    int ind = N - 1;
    while(ind>-1){
        if(D%routes[ind]!=0){
            D = D - (D%routes[ind]);
        }
        ind--;
        if (ind==-1){
            res = D;
            break;
        }
        
        
    }
    //cout<<N;
    
    answer.push_back(res);
}
for(int k=0;k<test_cases;k++){
printf("Case #%d: %d\n", k+1,answer[k]);}
// your code goes here
return 0;
}