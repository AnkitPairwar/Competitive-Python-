#include<iostream>
#include<string>
#include<vector>
using namespace std;


string left(string s, int val){
    return s.substr(val,s.size()-val) + s.substr(0,val) ;
}
string right(string s,int val){
    return s.substr(s.size()-val,val)+ s.substr(0,s.size()-val) ;
}
class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        int ans = 0,sf = 0,dir = 0;
        for(int v = 0; v<shift.size() ;v++){
            if (shift[v][0]== 0){ 
                s = left(s , shift[v][1]);
                //left    
            }
            else{
                s = right(s , shift[v][1]);
            }
        }
        return s;
    }
};