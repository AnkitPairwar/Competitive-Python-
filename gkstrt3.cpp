#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main() {
int test_cases,N,K;
vector<int> answer;
cin >> test_cases;
for(int i=0;i<test_cases;i++){
    N=0;K=0;
    scanf("%d%d",&N,&K);
    vector<int> routes; //   
    for(int j=0 ;j<N ; j++){
        int r;
        scanf("%d",&r);
        routes.push_back(r);
    }
    //sort(routes,routes.size());
    //res = dp(routes,D);
    int count = 1,ans_count =0 ;
    for(int i = 0; i<N ; i++){
        if(routes[i] == routes[i-1]-1){
        count++;
        //cout<<"\n"<<routes[i];
        //cout <<routes[i];
            if(routes[i] ==1){
                if(count >= K){
                    ans_count++;
                    
                    }
                    count = 1;
            }
        }
        else{
            
        count =1;
        }
        
        
    }
    //cout<<N;
    
    answer.push_back(ans_count);
}
for(int k=0;k<test_cases;k++){
printf("Case #%d: %d\n", k+1,answer[k]);}
// your code goes here
return 0;
}