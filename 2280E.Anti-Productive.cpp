/*
 * Platform: Codeforces
 * Problem: 2280E - Anti-Productive
 * Link: https://codeforces.com/problemset/problem/2280/E
 * Time: O(nlog(n)+sqrt(l)) where n is the size of the input vector
 * Space: O(1)
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        long long l;
        scanf("%d %lld",&n,&l);
        vector<long long> a(n);
        for(auto&x:a)scanf("%lld",&x);
        sort(a.begin(),a.end());
        long long M=l-1;
        long long s=sqrtl((long double)M);
        while(s*s>M)s--;
        while((s+1)*(s+1)<=M)s++;
        long long top=a[n-1];
        long long g=0;
        for(int i=0;i<n-1;i++)g+=a[i];
        long long cmax=min(s,a[n-2]);
        long long ans=g;
        int p=0;
        for(long long c=1;c<=cmax;c++){
            while(p<n-1&&a[p]<c)p++;
            g-=(n-1-p);
            long long x=min(top,M/c);
            ans=min(ans,top-x+g);
        }
        printf("%lld\n",ans);
    }
    return 0;
}