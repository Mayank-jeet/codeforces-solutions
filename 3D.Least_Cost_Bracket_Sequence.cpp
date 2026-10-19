/*
 * Platform: Codeforces
 * Problem: 3D - Least Cost Bracket Sequence
 * Link: https://codeforces.com/problemset/problem/3/D
 * Time: O(n*log(n))
 * Space: O(n)
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.size();
    long long cost=0;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    int bal=0;
    for(int i=0;i<n;i++){
        if(s[i]=='('){
            bal++;
        } else {
            if(s[i]=='?'){
                int a,b;
                cin>>a>>b;
                s[i]=')';
                cost+=b;
                pq.push({a-b,i});
            }
            bal--;
        }
        if(bal<0){
            if(pq.empty()){ cout<<-1<<'\n'; return 0; }
            auto [d,idx]=pq.top(); pq.pop();
            cost+=d;
            s[idx]='(';
            bal+=2;
        }
    }
    if(bal!=0){ cout<<-1<<'\n'; return 0; }
    cout<<cost<<'\n'<<s<<'\n';
    return 0;
}