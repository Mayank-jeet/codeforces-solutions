/*
 * Platform: Codeforces
 * Problem: 3C - Tic-tac-toe
 * Link: https://codeforces.com/problemset/problem/3/C
 * Time: O(1)
 * Space: O(1)
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s, t;
    for(int i=0;i<3;i++){ cin>>t; s+=t; }
    int X=0, O=0;
    for(char c: s){
        if(c=='X') X++;
        else if(c=='0') O++;
    }
    if(O>X || X>O+1){ cout<<"illegal\n"; return 0; }

    int arr[8][3]={{0,1,2},{3,4,5},{6,7,8},{0,3,6},{1,4,7},{2,5,8},{0,4,8},{2,4,6}};
    int x_won=0, o_won=0;
    for(int i=0;i<8;i++){
        char c=s[arr[i][0]];
        if(c!='.' && c==s[arr[i][1]] && c==s[arr[i][2]]){
            if(c=='X') x_won++;
            else o_won++;
        }
    }
    if((x_won && o_won) || (x_won && X!=O+1) || (o_won && X!=O)){
        cout<<"illegal\n";
    }
    else if(x_won) cout<<"the first player won\n";
    else if(o_won) cout<<"the second player won\n";
    else if(X+O==9) cout<<"draw\n";
    else if(X==O) cout<<"first\n";
    else cout<<"second\n";
    return 0;
}