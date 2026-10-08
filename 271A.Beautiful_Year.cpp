#include<bits/stdc++.h>
using namespace std;
bool isBeautifil(int y){
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
    while(!isBeautifil(++y));
    cout<<y;
    return 0;
}