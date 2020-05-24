#include <cmath>
#include <algorithm>
#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <map>
#include <queue>

using namespace std;

void swap(int *a , int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    vector<int> arr;
    int n,k;
    cin >> n >> k;
    for(int i=0;i<n;++i){
        int t;
        cin>>t;
        arr.push_back(t);        
    }

    for(int i=0;i<n;++i){
        for(int j=0;j<n-i-1;++j){
            //code
            if(arr[j]%k > arr[j+1]%k) swap(&arr[j] , &arr[j+1]);
            
        }
    }
    
    for(int i=0;i<n;++i){
                cout << arr[i] <<" ";
    }
   
    
    return 0;

}
