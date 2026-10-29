/*
 * Platform: Codeforces
 * Problem: 2272C - Yet Another Black Cell Problem
 * Link: https://codeforces.com/problemset/problem/2272/C
 * Time: O(n*log(D)) where n is number of elements in array and D is the maximum difference between the values of the array
 * Space: O(n)
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) {
        int n,x;
        cin>>n>>x;
        vector<long long>a(n);
        for(auto&v:a) cin>>v;
        auto possible=[&](long long k) {
            vector<long long>isolated;
            for(int i=0;i<n;i++) {
                bool hasNeighbor=false;
                if(i>0&&a[i]-a[i-1]<=k) hasNeighbor=true;
                if(i+1<n&&a[i+1]-a[i]<=k) hasNeighbor=true;
                if(!hasNeighbor) isolated.push_back(a[i]);
            }
            int needed=0;
            for(int i=0;i<(int)isolated.size();) {
                needed++;
                long long reach=isolated[i]+2*k;
                while(i<(int)isolated.size()&&isolated[i]<=reach) i++;
                if(needed>x) return false;
            }

            return true;
        };
        long long left=1;
        long long right=0;
        for(int i=0;i+1<n;i++) right=max(right,a[i+1]-a[i]);
        while(left<right) {
            long long mid=left+(right-left)/2;
            if(possible(mid)) right=mid;
            else left=mid+1;
        }
        cout<<left<<'\n';
    }
    return 0;
}