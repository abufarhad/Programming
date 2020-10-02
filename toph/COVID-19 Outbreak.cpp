
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
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define N 1000006

vector<pr>v[N];
ll val[N];

ll dfs(ll now, ll from)
{
    ll x=val[now];

    for(auto it : v[now])
    {
        if(it.first == from )continue;
        x+=min( dfs(it.ff ,  now) , it.ss );
    }
    return x;
}


int main()
{

    ll t;

    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=0,ans=0,sum=0;
    cin>>n>>z;

	fr(i, n-1)
	{
		cin>>x>>y>>k;
		v[x].pb({y, k}) , v[y].pb({x, k});
	}

	fr1(i, n)cin>>val[i];

    ans=dfs(z, z);

	cout<<ans<<endl;

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1



