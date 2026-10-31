/*
 * Platform: Codeforces
 * Problem: 2278D - Lock and Unlock
 * Link: https://codeforces.com/problemset/problem/2278/D
 * Time: O(nlog(n))) where n is the size of the input vector
 * Space: O(1)
 */#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        long long med=a[n/2];
        long long cost=0;
        for(long long el:a) cost+=llabs(el-med);
        cout<<cost<<' '<<a[n-1]-a[0]<<'\n';
    }
    return 0;
}