#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
bool vis[100005 ];
vector<ll>g[100005];
ll dist[10005];

ll dfs( ll n )
{
    //cout<<n<<endl;
    vis[n]=1;
    fr(i, g[n].size())if(!vis[ g[n][i]  ] )
        dfs(g[n][i] );
}

int main()
{
    ll m,n,i,k,l,t,r,cnt=0,a,b;
    cin>>t;
    while(t--)
    {

        ll node, edge;
        cin>>node>>edge;
        fr(i,node)g[i].clear();
        memset(vis, 0, sizeof(vis));

        ll ans=0;
        fr(i,edge)
        {
            cin>>a>>b;
            g[a].pb(b);
            g[b].pb(a);
        }

        fr(i, node)
        {
            if( !vis[i] )
            {
               // cout<<"i ="<<i<<endl;
                ans++;
                dfs(i);
            }
        }
    cout<<ans<<endl;
    }
}
