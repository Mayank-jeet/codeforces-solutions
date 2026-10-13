/*
 * Platform: Codeforces
 * Problem: 2275B - Did Not Go to Print
 * Link: https://codeforces.com/problemset/problem/2275/B
 * Time: O(t*n) where t is number of test cases and n is length of input string
 * Space: O(n)
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        deque<int> dq;
        queue<int> notPrinted;
        for(int i=0;i<n;i++){
            if(s[i]-'0'==1){
                dq.push_back(i+1);
            }
            else if(s[i]-'0'==2){
                if(!dq.empty()){
                    dq.pop_back();
                    notPrinted.push(i+1);
                }
            }
        }
        cout<<dq.size()+notPrinted.size()<<'\n';
        while(!dq.empty() || !notPrinted.empty()){
            if (dq.empty() ||
                (!notPrinted.empty() && notPrinted.front()<dq.front())){
                cout<<notPrinted.front()<<' ';
                notPrinted.pop();
            } else{
                cout<<dq.front()<< ' ';
                dq.pop_front();
            }
        }
        cout<<'\n';
    }
    return 0;
}