#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;
#define ll long long
#define md  1000000007

ll sumtill(ll x)
{
    x%=md;
    ll sum=x*(x+1);
    sum%=md;
    sum*=(md+1)/2;
    sum%=md;
    return sum;
}


ll solve(ll n)
{
    ll ans=0;

    for(ll i=1; i*i<=n; i++)
    {
        if(i==n/i) continue;

        //cout<<i<<" ";
        ans+= n/i * i;
        ans%=md;
    }
    //cout<<ans<<endl;

    //cout<<ans<<endl;

    for(ll i=1; i*i<=n; i++)
    {
        //cout<<n/i<<" "<<(n/(i+1))<<endl;
        //cout<<sumtill(n/i) <<" "<< sumtill(n/(i+1))<<endl;

        ans+=(sumtill(n/i) - sumtill(n/(i+1)))*i;
        ans%=md;
    }
    cout<<ans<<'\n';
}

int main()
{
    ll n, ans=0, tmp=0, cnt=0;
    cin>>n;
    solve(n);
}
