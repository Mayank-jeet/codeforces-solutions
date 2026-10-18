/*
 * Platform: Codeforces
 * Problem: 2261B - What's the Capital of France?
 * Link: https://codeforces.com/problemset/problem/2261/B
 * Time: O(t*p) where t is the number of test cases and p is the number of bits in the maximum element of the array a
 * Space: O(n) space for storing the array a
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int> a;
        for(int i=0;i<n;i++){
            int el;
            cin>>el;
            a.push_back(el);
        }
        int ans=0;
        while(true){
            int mx=0;
            for(int el:a) mx=max(el,mx);
            if(mx==0) break;
            int p=1;
            while(p*2<=mx) p=p*2;
            bool smaller=false;
            for(int el:a){
                if(el<p){
                    smaller=true;
                    break;
                }
            }
            if(smaller){
                ans+=2*p-1;
                break;
            }
            else{
                ans+=p;
                for(int i=0;i<n;i++) a[i]-=p;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}