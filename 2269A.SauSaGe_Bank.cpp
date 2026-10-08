#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int k,n;
        cin>>n>>k;
        cout<<(long long)(pow(2,n-k+1)+2*(k-1))<<'\n';
    }
    return 0;
}