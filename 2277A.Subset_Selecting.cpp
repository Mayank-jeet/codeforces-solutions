/*
 * Platform: Codeforces
 * Problem: 2277A - Subset Selecting
 * Link: https://codeforces.com/problemset/problem/2277/A
 * Time: O(nlog(n)) where n is size of input vector
 * Space: O(1)
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a;
        for(int i=0;i<n;i++){
            int el;
            cin>>el;
            a.push_back(el);
        }
        sort(a.begin(),a.end());
        int prev=-1;
        int i=-1;
        while(true){
            int v=prev+1;
            int cntLE = upper_bound(a.begin(),a.end(),v)-a.begin();
            bool has = binary_search(a.begin(),a.end(),v);
            if(!has || cntLE < (v+1)*k) break;
            prev=v;
        }
        cout<<prev+1<<'\n';
    }
    return 0;
}