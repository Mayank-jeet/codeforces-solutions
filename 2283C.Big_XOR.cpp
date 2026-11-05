/*
 * Platform: Codeforces
 * Problem: 2283C - Big XOR
 * Link: https://codeforces.com/problemset/problem/2283/C
 * Time: O(n) where n is the size of the input vector
 * Space: O(1)
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int p=31-__builtin_clz(n);
        int cur=0;
        for(int i=1;i<=n;i++)cur^=i;
        vector<int> d(n+1,0);
        for(int j=p;j>=0;j--){
            if(!((cur>>(j+1))&1)){
                d[1<<j]=1;
                cur^=(3<<j);
            }
        }
        for(int i=1;i<=n;i++)printf("%d ",d[i]);
        printf("\n");
    }
    return 0;
}