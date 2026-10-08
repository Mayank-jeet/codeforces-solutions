/*
 * Platform: Codeforces
 * Problem: 4A - Watermelon
 * Link: https://codeforces.com/problemset/problem/4/A
 * Time: O(1)
 * Space: O(1)
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    int W;
    cin>>W;
    if (W>2 && W%2==0) cout<<"YES";
    else cout<<"NO";
    return 0;
}