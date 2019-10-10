#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi pair<ll,ll>
vector<pair<ll,ll> >graph[200];
ll dis[200];
ll par[200];
priority_queue<pi,vector<pi>,greater<pi> >q;
int main()
{
    ll n,m,u,v,c;
    scanf("%lld%lld",&n,&m);
    for(ll i=1;i<=m;i++)
    {
        scanf("%lld%lld%lld",&u,&v,&c);
        graph[u].push_back(make_pair(v,c));
        graph[v].push_back(make_pair(u,c));
    }
//    for(ll i=1;i<=n;i++)
//    {
//        printf("Node [%lld] : ",i);
//        for(ll j=0;j<graph[i].size();j++)
//        {
//            printf("%lld,%lld ",graph[i][j].first,graph[i][j].second);
//        }
//        printf("\n");
//    }
    ll src,des;
    scanf("%lld%lld",&src,&des);
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
    cout<<dis[des]<<endl;
    ll now_node=des;
    while(par[now_node]!=-1)
    {
        cout<<now_node<<endl;
        now_node=par[now_node];
    }
    cout<<src<<endl;
    return 0;
}
