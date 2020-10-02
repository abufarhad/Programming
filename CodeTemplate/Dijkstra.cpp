#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld",&n)
#define scll(n, m)          scanf("%lld%lld",&n, &m)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define all(x) 	            (x).begin(), (x).end()
#define allrev(x)           (x).rbegin(),(x).rend()
#define pr                  pair<ll, ll>
#define inf                 1e18
#define ff                  first
#define ss                  second
#define pn                  printf("\n")

#define N 200005
/// Syntax to create a min heap for priority queue, min value in the top()
priority_queue<pr  , vector<pr> , greater<pr> > pq;

ll par[N] , nxt[N] , node ,edge, dist[N];
vector<pr>v[N];

void Dijkstra(ll n)
{
    fr(i, N)par[i]=-1 , dist[i]=inf;
    dist[n]=0;
    pq.push({0 , n});

    while(!pq.empty())
    {
        ll u=pq.top().ss;
        pq.pop();

        for(auto now : v[u] )
        {
            ll v=now.ff ,  cost=now.ss;
            if(dist[v] > dist[u]+cost )
            {
                dist[v]=dist[u]+cost;
                par[v]=u;
                pq.push({dist[v]  , v });
            }
        }
    }
}

void path_print()
{
    vector<ll>path;
    ll des_node=node;

    while(par[des_node]!=-1)
    {
        path.pb(des_node);
        des_node=par[des_node];
    }
    path.pb(1);
    reverse(all(path));

    if(path.size()>1) {fr(i, path.size())cout<<path[i]<<" "; pn;}
    else cout<<-1<<endl;
}


int main()
{
    ll t;
    ll m,n,a, b, c,d,i,j,k,x,y,z,l,r, p, q;
    ll cnt=1,cn=0, cnn=0,ans=0,sum=0 ;
    scll(node , edge);

    fr(i, edge)
    {
        cin>>a>>b>>c;

        v[a].pb({b, c});
        v[b].pb({a, c});
    }

    Dijkstra(1);
    path_print();

    //fr(i, node)cout<<dist[i+1]<<" ";pn;

    return 0;
}

/// **************************Before submit****************************

///    ****Please check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1
