#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi pair<ll,ll>
vector<pair<ll,ll> >graph[1000000];
ll dis[20000];
ll par[20000];
priority_queue<pi,vector<pi>,greater<pi> >q;
int main()
{
    ll n,m,u,v,c,time_left;
    ll src,des;

    cin>>n>>time_left>>m;
   // scanf("%lld%lld",&n,&m);
    scanf("%lld%lld",&src,&des);

    for(ll i=1;i<=m;i++)
    {
        scanf("%lld%lld%lld",&u,&v,&c);
        graph[u].push_back(make_pair(v,c));
        graph[v].push_back(make_pair(u,c));
    }

    for(ll i=1;i<=n;i++)
    {
        dis[i]=LLONG_MAX;
    }
    dis[src]=0;
    par[src]=-1;
    q.push(pi(0,src));
    while(!q.empty())
    {
        pi srcc=q.top();
        q.pop();
        ll src_node=srcc.second;
        ll src_dis=srcc.first;
        for(ll i=0;i<graph[src_node].size();i++)
        {
            ll adj_node=graph[src_node][i].first;
            ll adj_cost=graph[src_node][i].second;
            if(dis[src_node]+adj_cost<dis[adj_node])
            {
                 par[adj_node]=src_node;
                 dis[adj_node]=dis[src_node]+adj_cost;
                 q.push(pi(dis[adj_node],adj_node));
            }
        }
    }
    if(dis[des]<=time_left)
    {
        printf("alive %lld\n",dis[des]);
    }
    else
        printf("died\n");
  //  cout<<dis[des]<<endl;



    return 0;
}
