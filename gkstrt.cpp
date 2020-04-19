#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

int main() {
int test_cases,N;
vector<int> answer;
cin >> test_cases;
for(int i=0;i<test_cases;i++){
    N=0;
    cin >> N;
    vector<int> checkp;    
    for(int j=0 ;j<N ; j++){
        int r;
        scanf("%d",&r);
        checkp.push_back(r);
    }
    int peak=0;
    //cout<<N;
    for(int j=1 ;j<N ; j++){
        
        if(checkp[j-1] < checkp[j] && checkp[j] > checkp[j+1] && (j+1)<N){
            peak++;;
            
            
        }    
        
        
        //printf(" %d %d",j,N);
    }
    answer.push_back(peak);
}
for(int k=0;k<test_cases;k++){
printf("Case #%d: %d\n", k+1,answer[k]);}
// your code goes here
return 0;
}
