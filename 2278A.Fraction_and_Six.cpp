/*
 * Platform: Codeforces
 * Problem: 2278A - Fraction and Six
 * Link: https://codeforces.com/problemset/problem/2278/A
 * Time: O(m+n) where m and n are sizes of the input strings
 * Space: O(m+n)
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        string p,q;
        cin>>p;
        cin>>q;
        if(m<n+3){
            cout<<"NO"<<'\n';
            continue;
        }
        unordered_map<char,int> u_map;
        string s="six";
        for(char el:p){
            u_map[el]++;
        }
        bool ok = true;
        for(char el:q){
            if(u_map.count(el)!=0) u_map[el]--;
            else{
                ok = false;
                break;
            }
            if(u_map[el]==0) u_map.erase(el);
        }
        if(ok && u_map.size()!=3) ok = false;
        if(ok){
            for(auto [key,val]:u_map){
                if((key!=s[0] && key!=s[1] && key!=s[2]) || val!=1){
                    ok = false;
                    break;
                }
            }
        }
        cout<<(ok ? "YES" : "NO")<<'\n';
    }
    return 0;
}