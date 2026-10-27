/*
 * Platform: Codeforces
 * Problem: 2272B - Frogs Jump
 * Link: https://codeforces.com/problemset/problem/2272/B
 * Time: O(n) where n is the length of the strings
 * Space: O(1)
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        string s1,s2;
        cin>>n>>s1>>s2;
        int cnt=0;
        for (int i=0;i<n;i++) {
            if(s1[i]=='f') cnt++;
            if(s2[i]=='f') cnt++;
        }
        cout<<cnt%2<<'\n';
    }
    return 0;
}