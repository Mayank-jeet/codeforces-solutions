/*
 * Platform: Codeforces
 * Problem: 2267B - Fashionable Array
 * Link:https://codeforces.com/problemset/problem/2267/B
 * Time: O(u*f) where u is number of unique elements in the array and f is the maximum frequency
 * Space: O(n)
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int> m;
        for(int i=0;i<n;i++){
            int el;
            cin>>el;
            m[el]++;
        }
        vector<int> res;
        while((int)res.size()<n){
            for(auto it=m.rbegin();it!=m.rend();++it){
                if(it->second>0){
                    res.push_back(it->first);
                    it->second--;
                }
            }
        }
        for(int el:res)cout<<el<<' ';
        cout<<'\n';
    }
    return 0;
}