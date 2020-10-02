#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define scl(n)              scanf("%lld",&n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define N 200005
#define ff                  first
#define ss                  second
#define pr pair<ll, ll>
#define pb push_back


priority_queue<pr , vector<pr> , greater<pr> >pq;
vector<pr>v[N];
ll par[N], dist[N], vis[N], ans, hotel;

ll dijkstra(ll des_node , ll x);

ll print_nodes(ll src, ll des_node)
{
    ans+=dist[des_node];
    if(vis[hotel]==0)dijkstra(des_node , hotel);

    vector<ll>vv;
    while(par[ des_node] !=-1 )
    {
         vv.pb(des_node);
         des_node=par[des_node];
    }

    if(vv.size()<1)printf("Be seeing ya, John");
    else printf("%lld\n", ans);
}


ll dijkstra(ll src, ll dest)
{
    fr1(i, N)par[i]=-1;
    fr1(i, N)dist[i]=LLONG_MAX;

    dist[src]=0;
    pq.push({0,src });
    vis[src]=1;

    while(!pq.empty())
    {
        ll u=pq.top().ss;
        //cout<<u<<endl;

        if(u==dest)return print_nodes(src,   dest);
        pq.pop();
        for(auto now : v[u])
        {
            ll nxt=now.ff;
            ll cost=now.ss;
             vis[nxt]=1;
            //cout<<nxt<<" - "<<cost<<endl;

            if(dist[nxt] > cost+dist[u])
            {
                par[nxt]=u;
                dist[nxt]=cost+dist[u];
                pq.push({dist[nxt] , nxt });
            }
        }
    }

    printf("Be seeing ya, John");
}


int main()
{
    ll t;
    scl(t);
    fr(cs, t)
    {
        ll i, j, m, n, x,y, q, z;

        ll src, dest;

        scl(n), scl(m), scl(hotel), scl(q);
        fr(i, m)
        {
            scl(x), scl(y), scl(z);
            v[x].pb({y, z});
        }

        printf("Case %lld:\n", cs);
        while(q--)
        {
        ans=0;
        vis[hotel]=0;

        scl(src), scl(dest);
        dijkstra(src, dest);
        }

    }
}
