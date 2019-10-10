#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
bool vis[10005 ];
vector<ll>g[10005];
ll dist[10005];

ll dfs( ll n, ll d )
{
    vis[n]=1, dist[n]=d;
    fr(i, g[n].size())if(!vis[ g[n][i]  ] )dfs(g[n][i], d+1 );
}

int main()
{
    ll m,n,i,k,l,t,r,cnt=0,a,b;

        ll node, edge;
        cin>>node;

        fr(i,node-1)
        {
            cin>>a>>b;
            g[a].pb(b);
            g[b].pb(a);
        }

        dfs(1,0);
        ll start_node=0, max_dist=0;

        fr1(i,node)if(dist[i]>dist[start_node ] )start_node=i;

        memset(vis, 0, sizeof(vis) );

        dfs(start_node, 0);

        fr1(i, node)max_dist=max( max_dist, dist[i] );

        pfl(max_dist);

}
