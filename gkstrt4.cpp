#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main() {
int test_cases,N,Q;
vector<int> answer;
cin >> test_cases;
for(int i=0;i<test_cases;i++){
int qsum = 0;
char q;
N=0;Q=0;
scanf("%d%d",&N,&Q);
vector<int> cand; //   
for(int j=0 ;j<N ; j++){
    int r;
    scanf("%d",&r);
    cand.push_back(r);
}

for(int i =0;i<Q;i++){
    int start,end;
    
    scanf("%c%d%d",&q,&start,&end);
    if(q == 'Q'){
        int sum =0;
        for(int j=0;j < start-end+1;j++){
            sum += (j%2==0?1:-1)* cand[start-1+j] * (j+1);
            }
        qsum+=sum;
        }
    else if(q == 'U'){
        cand[start-1] = end;
        }            
    
    }

answer.push_back(qsum);
}
for(int k=0;k<test_cases;k++){
printf("Case #%d: %d\n", k+1,answer[k]);
}
// your code goes here
return 0;
}