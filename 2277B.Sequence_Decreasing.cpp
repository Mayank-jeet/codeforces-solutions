/*
 * Platform: Codeforces
 * Problem: 2277B - Sequence Decreasing
 * Link: https://codeforces.com/problemset/problem/2277/B
 * Time: O(n)
 * Space: O(1)
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int minm=INT_MAX;
        for(int i=0;i<n;i++){
            int el;
            cin>>el;
            minm=min(minm,el);
        }
        cout<<(minm<=n-1?n:0)<<'\n';
    }
    return 0;
}