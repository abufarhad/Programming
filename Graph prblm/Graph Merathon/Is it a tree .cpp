#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
 vector<ll>v[10005];
 bool vis[ 10005]={0};
 ll ans=-1;

void dfs(ll n )
{
    vis[n]=1;
    ans++;
    fr(i, v[n].size())
    {
        ll f=v[n][i];

        if( !vis[f] ) { dfs(f);}
    }
}

int main()
{
    ll m,n,a,b,i;
    cin>>m>>n;
    fr(i,n)
    {
        cin>>a>>b;
        v[a].pb(b);
        v[b].pb(a);
    }
    dfs(1);
   // cout<<ans<<endl;
    if(m==n+1 && m==ans+1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
