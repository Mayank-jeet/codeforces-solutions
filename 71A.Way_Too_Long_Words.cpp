/*
 * Platform: Codeforces
 * Problem: 71A - Way Too Long Words
 * Link: https://codeforces.com/problemset/problem/71/A
 * Time: O(1)
 * Space: O(1)
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        if(s.length()<=10) cout<<s;
        else{
            cout<<s[0]<<s.length()-2<<s[s.length()-1];
        }
        cout<<'\n';
    }
    return 0;
}