#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;
#define ll long long
int main()
{
    ll cnt=0,ans=0,sum=0;
    ll n, a , b , i;
    cin>>n>>a>>b;

    for(i=1; i<n; i++)
    {
        ll mn=min((a/i ) , (b/(n-i) ) );
        ans=max(ans, mn );
    }

    cout<<ans<<endl;
    return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1



