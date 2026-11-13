/*
 * Platform: Codeforces
 * Problem: 2280A - Are They the Same?
 * Link: https://codeforces.com/problemset/problem/2280/A
 * Time: O(n) where n is the size of the input vector
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
        int oddA=0,oddB=0;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            oddA+=x%2;
        }
        for(int i=0;i<n;i++){
            int x;cin>>x;
            oddB+=x%2;
        }
        bool ok;
        if(k%2==0)ok=(oddA>=oddB);
        else ok=(oddA<=oddB);
        cout<<(ok?"YES":"NO")<<'\n';
    }
    return 0;
}