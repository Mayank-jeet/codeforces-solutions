/*
 * Platform: Codeforces
 * Problem: 2276A - Perfect Sandwiches
 * Link: https://codeforces.com/problemset/problem/2276/A
 * Time: O(t) where t is number of test cases
 * Space: O(1)
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b;
        cin>>a>>b;
        if(a<=b) cout<<-1;
        else cout<<min(b,a-b);
        cout<<'\n';
    }
    return 0;
}