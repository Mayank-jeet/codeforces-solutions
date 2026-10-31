/*
 * Platform: Codeforces
 * Problem: 2278C - Math and Physics
 * Link: https://codeforces.com/problemset/problem/2278/C
 * Time: O(m) where n is the size of the input vector
 * Space: O(1)
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        bool anyBig=false, interiorBig=false;
        for(int i=0;i<n;i++){
            if(a[i]>=2){
                anyBig=true;
                if(i!=0 && i!=n-1) interiorBig=true;
            }
        }
        if(!anyBig){
            cout<<-1<<'\n';
            continue;
        }
        int sum=accumulate(a.begin(),a.end(),0);
        if(interiorBig) cout<<sum-1<<'\n';
        else cout<<sum-(n-1)<<'\n';
    }
    return 0;
}