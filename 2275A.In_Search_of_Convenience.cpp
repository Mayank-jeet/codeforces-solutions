/*
 * Platform: Codeforces
 * Problem: 2275A - In Search of Convenience
 * Link: https://codeforces.com/problemset/problem/2275/A
 * Time: O(t) where t is number of test cases
 * Space: O(1)
 */
#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int x,y,R;
        cin>>x>>y>>R;
        cout<<x<<' '<<y+R<<'\n';
    }
    return 0;
}