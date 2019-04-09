#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,t;
    cin>>t;
    while(t--){
    cin>>a>>b;
    if(__gcd(a,b)==1) cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
}}
