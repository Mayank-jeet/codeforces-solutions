/*
 * Platform: Codeforces
 * Problem: 3A - Shortest path of the king
 * Link: https://codeforces.com/problemset/problem/3/A
 * Time: O(max(x,y)) where x and y are the differences in the coordinates of the two squares 
 * Space: O(1)
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    int x=abs(s[0]-t[0]);
    int y=abs(s[1]-t[1]);
    cout<<max(x,y)<<'\n';  
    if(x<y){
        if(s[1]<t[1]){
            for(int i=0;i+x<y;i++) cout<<"U"<<'\n';
        }
        else{
            for(int i=0;i+x<y;i++) cout<<"D"<<'\n';
        }
    }
    else if(x>y){
        if(s[0]<t[0]){
            for(int i=0;i+y<x;i++) cout<<"R"<<'\n';
        }
        else{
            for(int i=0;i+y<x;i++) cout<<"L"<<'\n';
        }
    }
    if(s[0]==t[0] || s[1]==t[1]) return 0;
    string move=s[0]<t[0]?"R":"L";
    char el=s[1]<t[1]?'U':'D';
    move.push_back(el);
    for(int i=0;i<min(x,y);i++) cout<<move<<'\n';
    return 0;
}