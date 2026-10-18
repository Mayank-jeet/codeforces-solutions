/*
 * Platform: Codeforces
 * Problem: 2261A - Hey, It's Me, Souvlakity
 * Link: https://codeforces.com/problemset/problem/2261/A
 * Time: O(t) where t is the number of test cases
 * Space: O(n) where n is the length of the string s
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int k=count(s.begin(),s.end(),'1');
        if(k==1){
            cout<<0<<"\n";
        }else if(k==2){
            cout<<1<<"\n";
        }else{
            cout<<(int)s.rfind('1')-(int)s.find('1')<<"\n";
        }
    }
    return 0;
}