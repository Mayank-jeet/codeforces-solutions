/*
 * Platform: Codeforces
 * Problem: 2267A - Turn Into a Palindrome
 * Link:https://codeforces.com/problemset/problem/2267/A
 * Time: O(t*n) where t is number of test cases and n is length of the string
 * Space: O(n) for storing the input string
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        char c;
        int n;
        cin>>n>>c;
        string s;
        for(int j=0;j<n;j++){
            char el;
            cin>>el;
            s.push_back(el);
        }
        int cost=0;
        for(int j=0;j<n/2;j++){
            if(s[j]==s[n-1-j]) continue;
            if(s[j]!=c) cost+=1;
            if(s[n-1-j]!=c) cost+=1;
        }
        cout<<cost<<'\n';
    }
    return 0;
}