#include<bits/stdc++.h>
using namespace std;
#define ll long long

 ll reduceB(ll a, string s)
 {
     ll mod=0;
     for(ll i=0;i<s.length();i++) mod=(mod*10+ (s[i]-'0') ) %a;
     return mod;
 }

ll gcdl(ll a, string s)
{
    ll num=reduceB(a,s);
    return __gcd(a,num);
}

int main()
{
    ll m,n,k,l,i;
    string s;
    cin>>n>>s;
    cout<<gcdl(n,s)<<endl;
}
