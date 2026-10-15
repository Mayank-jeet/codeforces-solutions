/*
 * Platform: Codeforces
 * Problem: 2276C - Subarrays
 * Link: https://codeforces.com/problemset/problem/2276/C
 * Time: O(t*n) where t is number of test cases and n is size of input vector
 * Space: O(n)
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
        vector<int> a;
        for(int i=0;i<n;i++){
            int el;
            cin>>el;
            a.push_back(el);
        }
        unordered_map<int,int> u_map={{0,1}};
        long long sum=0;
        for(int i=0;i<k && i<n;i++) sum+=a[i];
        long long ans=0;
        long long backSum=0;
        for(int i=k;i<n;i++){ 
            sum+=a[i];
            ans+=u_map[sum%k];
            backSum+=a[i-k];
            u_map[backSum%k]++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}