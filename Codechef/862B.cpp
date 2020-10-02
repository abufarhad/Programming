
#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld",&n)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl


#define N 100006
ll vis[N];
vector<ll>v[N];
ll x=0, y=0;

ll dfs(ll s, ll d)
{
    vis[s]=1;

    if(d%2)x++;  else y++;

    for(auto it: v[s])if(!vis[it])dfs(it , d+1);
}

int main()
{
    ll m,n,b,c,d,i,j,k,z,l,q,r;

    ll cnt=0,ans=0,sum=0;
    scl(n);
    ll a[n];

    fr(i,n-1)
    {
       cin>>b>>c;
       v[b].pb(c) , v[c].pb(b);
    }

    dfs(1, 0);

    ans=x*y;
    ans-=(n-1);

    cout<<ans;
return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1



