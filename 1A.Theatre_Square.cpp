/*
 * Platform: Codeforces
 * Problem: 1A - Theatre Square
 * Link: https://codeforces.com/problemset/problem/1/A
 * Time: O(1)
 * Space: O(1)
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,a;
    cin>>m>>n>>a;
    cout<<(long long)ceil((double)m/a)*(long long)ceil((double)n/a)<<endl;
    return 0;
}