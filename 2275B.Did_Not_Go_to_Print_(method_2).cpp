/*
 * Platform: Codeforces
 * Problem: 2275B - Did Not Go to Print
 * Link: https://codeforces.com/problemset/problem/2275/B
 * Time: O(n) where n is length of input string
 * Space: O(n)
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> s,r;
        for(int i=0;i<n;i++){
            char el;
            cin>>el;
            if(el=='1') s.push_back(i+1);
            else if(el=='2' && s.size()!=0){
                s.pop_back();
                r.push_back(i+1);
            }
        }
        cout<<s.size()+r.size()<<'\n';
        size_t sPointer=0,rPointer=0;
        while(sPointer<s.size() || rPointer<r.size()){
            if(sPointer<s.size() && rPointer<r.size()){
                if(s[sPointer]<r[rPointer]){
                    cout<<s[sPointer];
                    sPointer++;
                }
                else{
                    cout<<r[rPointer];
                    rPointer++;
                }
            }
            else if(sPointer<s.size()){
                cout<<s[sPointer];
                sPointer++;
            }
            else{
                cout<<r[rPointer];
                rPointer++;
            }
            cout<<' ';
        }
        cout<<'\n';
    }
    return 0;
}
