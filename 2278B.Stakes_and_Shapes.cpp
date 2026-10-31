/*
 * Platform: Codeforces
 * Problem: 2278B - Stakes and Shapes
 * Link: https://codeforces.com/problemset/problem/2278/B
 * Time: O(x+y+z) where x, y, and z are the input integers
 * Space: O(x+y+z)
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        char c;
        if(x>=y) c='P';
        else if(y>=z) c='R';
        else c='S';
        cout<<string(x+y+z,c)<<'\n';
    }
    return 0;
}