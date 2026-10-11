/*
 * Platform: Codeforces
 * Problem: 2271A - Robot Odd Moves
 * Link: https://codeforces.com/problemset/problem/2271/A
 * Time: O(t)
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
        if(abs(b)>a+1) cout<<-1;
        else if((a+b)%2==0) cout<<a;
        else cout<<a+1;
        cout<<'\n';
    }
    return 0;
}