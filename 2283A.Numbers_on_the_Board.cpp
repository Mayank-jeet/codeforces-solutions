/*
 * Platform: Codeforces
 * Problem: 2283A - Numbers on the Board
 * Link: https://codeforces.com/problemset/problem/2283/A
 * Time: O(1)
 * Space: O(1)
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        int ans;
        if(l>0 || r<0) ans=r-l;
        else if(l==0 || r==0) ans=(l==r)?0:r-l-1;
        else ans=max(0,abs(r-abs(l))-1);
        cout<<ans<<'\n';
    }
    return 0;
}