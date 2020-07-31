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
#define ll long long
#define test int t;cin>> t;while(t--)
#define Y "No Compilation Errors"
#define N "Compilation Errors"
#define pb push_back
#define pp pop_back
#define f(i,n) for(int i=0;i<n;++i)
#define fd(i,n) for(int i=n-1;i>=0;--i)


using namespace std;

bool bal(string s , int n)
{
    int countP=0;
    stack<char> st;
    f(i,n)
        {
            if(s[i] == '{' || s[i] == '(' || s[i] == '<' ) st.push(s[i]);
            else if(s[i] == 'P') countP++; 
            else{

                if(st.empty())  return false;
                else{
                 char brac = st.top(); 
                 st.pop(); 

                 if(s[i] == '}')
                    {
                        if(brac != '{' )  return false;
                    } 
                 else if(s[i] == '>')
                    {
                        if(brac != '<' ) return false;
                    }
                 else if(s[i] == ')')
                     {
                        if(brac != '(' ) return false;
                        } 

                    }
                }            
        }
        if(!st.empty() || countP >100)  return false;
        return true;
}

bool check( string s ,int n)
{
    int countA=0;
    bool mains=false ,user=false;

    if(s[0] != '{') return false; 

    f(i,n)
    {
        if(s[i] =='<' ) {countA++; mains =true; continue;}
        if(s[i] == '(') {user =true; continue;}
        
        if(mains)
        {
            if(s[i] == '(' )  return false;
            if(s[i] == '>' ) mains =false;
            continue;
        }
        if(user)
        {
            if(s[i]=='(' ) return false;
            if(s[i] == ')' ) user =false;
            continue;
        }
        if(s[i] == '{'  && i!=0) return false;
    }    
    if(countA != 1) return false;
    return true;
}

int main() {
    test
    {
    	string s;
      	cin >> s;
      	int n = s.size();
        if(!bal(s , n) || !check(s ,n)) cout << N << endl ; 
        else cout << Y <<endl;
    }
    return 0;

}
