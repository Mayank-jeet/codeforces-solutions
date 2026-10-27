/*
 * Platform: Codeforces
 * Problem: 2272E - Memory Cell Interception
 * Link: https://codeforces.com/problemset/problem/2272/E
 * Time: O(n+m) where n and m are the lengths of the strings
 * Space: O(n+m)
 */
#include<bits/stdc++.h>
using namespace std;
vector<long long> solve(const string& s,const string& t){
    int n=s.size(),m=t.size();
    vector<long long> q;
    for(int j=0;j<m;j++){
        if(t[j]=='W') q.push_back(j+1);
    }
    int wt=q.size();
    vector<long long> cnt(m+2,0),sum(m+2,0);
    for(int j=0;j+1<wt;j++){
        long long g=q[j+1]-q[j];
        cnt[g]++;
        sum[g]+=g;
    }
    for(int v=1;v<=m+1;v++){
        cnt[v]+=cnt[v-1];
        sum[v]+=sum[v-1];
    }
    long long totalGaps=max(0,wt-1);
    vector<long long> res;
    int l=0;
    bool hasW=false;
    for(int i=0;i<n;i++){
        if(s[i]=='W'){
            l=i+1;
            hasW=true;
            continue;
        }
        long long len=i-l+1;

        if(hasW){
            if(wt==0) res.push_back(m+1);
            else res.push_back(max((long long)m,q[wt-1]+i-l)+1);
        }
        else{
            long long ans=1;
            if(wt>0){
                int c=min<long long>(len,m);
                ans+=sum[c]+len*(totalGaps-cnt[c])+len;
            }
            res.push_back(ans);
        }
    }
    return res;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int n,m;
        string s,t;
        cin>>n>>m>>s>>t;
        vector<long long> a=solve(s,t);
        vector<long long> b=solve(t,s);
        for(long long v:a) cout<<v<<" ";
        cout<<"\n";
        for(long long v:b) cout<<v<<" ";
        cout<<"\n";
    }
    return 0;
}