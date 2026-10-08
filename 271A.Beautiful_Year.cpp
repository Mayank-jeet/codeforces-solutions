/*
 * Platform: Codeforces
 * Problem: 271A - Beautiful Year
 * Link: https://codeforces.com/problemset/problem/271/A
 * Time: O(k) where k is the distance of next beautiful number from input y
 * Space: O(1)
 */
#include<bits/stdc++.h>
using namespace std;
bool isBeautiful(int y){
    set<int> s;
    while(y){
        s.insert(y%10);
        y/=10;
    }
    return s.size()==4;
}
int main(){
    int y;
    cin>>y;
    while(!isBeautiful(++y));
    cout<<y;
    return 0;
}