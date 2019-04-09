#include<bits/stdc++.h>
using namespace std;
int main() {
long long i,j,m,d,n,t=10,cnt=0;
set<int>s;
while(t--){
    for(i=1;i<=10;i++){
    cin>>m ;
    d=m%42;  s.insert(d); }
    cout<<s.size()<<endl;  s.clear(); }
    return 0;}

