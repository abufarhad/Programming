#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define N 200005
#define ff                  first
#define ss                  second
#define pr pair<ll, ll>
#define pb push_back


priority_queue<pr , vector<pr> , greater<pr> >pq;
vector<pr>v[N];
vector<ll>tcost;


ll par[N], dist[N];
ll print_nodes(ll src, ll node)
{
    ///Shortest path printing
    vector<ll>vv;


    ll des_node=node;
    cout<<"cst "<<dist[des_node]<<endl;
    while(par[ des_node] !=-1 )
    {
         vv.pb(des_node);
         des_node=par[des_node];
    }
    vv.pb(src);
    reverse(vv.begin(), vv.end());


    if(vv.size()>1) fr(i,vv.size())cout<<vv[i]<<" ";
    else cout<<"-1"<<endl;
}


ll dijkstra(ll src, ll dest)
{
    fr(i, N)par[i]=-1;
    fr(i, N)dist[i]=LLONG_MAX;

    dist[src]=0;
    pq.push({0,src });

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

            //cout<<nxt<<" - "<<cost<<endl;

            if(dist[nxt] > cost+dist[u])
            {
                par[nxt]=u;
                dist[nxt]=cost+dist[u];
                pq.push({dist[nxt] , nxt });
            }
        }
    }

}


int main()
{
    ll i, j, m, n, x,y, z;

    ll src, dest;
    cin>>n;
    fr(i, n)
    {
        cin>>x>>y>>z;
        v[x].pb({y, z});
        v[y].pb({x, z});
    }

    cin>>src>>dest;
    dijkstra(src, dest);
}
/*
6
1 2 2
2 5 5
2 3 4
1 4 1
4 3 3
3 5 1
1 5





8
0 2 1
0 4 2
1 3 1
1 4 1
0 1 1
2 4 1
3 4 2
1 2 1
1 3
*/
