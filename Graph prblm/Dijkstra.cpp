#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pr pair<ll , ll>
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define ff                  first
#define ss                  second
#define pn                  printf("\n")
#define pb                  push_back
#define N 200005

vector<pr>v[N];
priority_queue<pr , vector<pr> , greater <pr>>pq;


ll n , dist[N] , par[N];

void dijkstra()
{
    fr(i , N)dist[i]=LLONG_MAX;
    fr(i , N) par[i]=-1;

    dist[1]=0;
    pq.push({0 , 1 } );
    while(!pq.empty())
    {
        ll u=pq.top().ss;

        pq.pop();
        for(auto now: v[u] )
        {
            ll nxt=now.ff , cost=now.ss;

            ll tot=dist[u]+cost;
            if(dist[nxt]> tot )
            {
                par[nxt]=u;
                dist[nxt]=tot;

                pq.push({ tot , nxt });
            }
        }
    }

    vector<ll>path;
    ll des_node=n;
    while( par[des_node]!=-1 )
    {
        path.pb(des_node);
        des_node=par[des_node];
    }
    path.pb(1);

    reverse(path.begin() , path.end());

    if(path.size()>1 ) for(auto i: path)cout<<i<<" ";
    else cout<<-1<<endl;
}

int main()
{
    ll  m,x, y,z;
    cin>>n>>m;
    fr(i , m)
    {
        cin>>x>>y>>z;
        v[x].pb({ y, z});
        v[y].pb({x, z });
    }
    dijkstra();
}
