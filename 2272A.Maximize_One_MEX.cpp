/*
 * Platform: Codeforces
 * Problem: 2272A - Maximize One MEX
 * Link: https://codeforces.com/problemset/problem/2272/A
 * Time: O(n)
 * Space: O(n)
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
        int m=n-k+1;
        vector<int> seen(n,0);
        for(int i=0;i<m;i++){
            seen[a[i]]=1;
        }
        int x=0;
        while(x<n && seen[x]) x++;
        if(x>=m){
            cout<<-1<<'\n';
            continue;
        }
        int p=0;
        for (int i=0;i<n;i++) {
            if(a[i]==x) p=i;
        }
        int q=0;
        for (int i=0;i<m;i++) {
            if(a[i]>= m){
                q=i;
                break;
            }
        }
        cout<<q+1<<" "<<p+1<<'\n';
    }
    return 0;
}