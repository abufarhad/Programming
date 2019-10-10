#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define bug puts("bug");


//void dfs( ll n, ll ttl, ll d )
//{
//    c++;
//    vis[n]=1;
//    if(d==ttl ) return ;
//    fr(i, g[n].size())if(!vis[ g[n][i]  ] )dfs(g[n][i],ttl, d+1 );
//}

ll c=0;
map<ll,ll>vis;
void bfs(ll s, map<ll, vector<ll> >g )
{
    queue<ll>q;
    q.push(s);
    vis[s]=0;
    while(!q.empty())
    {
        ll top=q.front();
        q.pop();
        fr(i,g[top].size())
        {
            ll nd= g[top][i];
            if(!vis.count(nd))
            {
                vis[nd]=vis[top]+1;
                q.push(nd);
            }
        }
    }
}

int main()
{
    ll m,n,i,k,l,t=1,r,cnt=0,a,b;

    ll node, edge;
    while(cin>>node)
    {
        map<ll, vector<ll> > g;
        ll ans;
        if(node==0) return 0;
        set<ll>s;
        while(node--)
        {
            cin>>a>>b;
            g[a].pb(b);
            g[b].pb(a);
            s.insert(a), s.insert(b);
        }
        ll nd, ttl;

        while(cin>>nd>>ttl)
        {
            c=0;
            if(nd==0 && ttl==0)break;
            vis.clear();
            map<ll,ll>:: iterator it;
            bfs(nd, g);
            for( it=vis.begin(); it!=vis.end(); it++ )
            {
               // cout<<(*it).first<<" -- "<<(*it).second<<endl;
                if( (*it).second >ttl )c++;
            }
            //cout<<c<<endl;
            //cout<<g.size()<<" <-> "<<vis.size()<<endl;
            ans=c+ g.size() -vis.size();  // if the graph has no connected node ( The graph could has no connected nodes)


           printf("Case %lld: %lld nodes not reachable from node %lld with TTL = %lld.\n",t, ans,nd,ttl);
           t++;
        }
    }
}
