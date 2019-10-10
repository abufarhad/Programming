#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                   push_back
#define bug                 puts("bug");
#define tcas(i,t)             for(ll i=1;i<=t;i++)
#define pcas(i)                printf("Case %lld: ",i)

vector<ll>v[105];
bool vis[105];
ll dist1[105], dist2[105];

ll cnt, src;

void bfs(ll s , ll d[])
{
    memset(vis, 0, sizeof(vis) );
    vis[s]=1;
    d[src]=0;

    queue<ll>q;
    q.push(s);
    while(!q.empty())
    {
        ll x=q.front();
        q.pop();
        fr(i, v[x].size())
        {
            ll y=v[x][i];
            if(vis[y] ==0) vis[y]=1, d[y]=d[x]+1, q.push(y);//, cout<<y<<" ";

          // cout<<y<<" y-- d(y) "<<d[y]<<" || "<<x<<" x-- d(x) "<<d[x]<<endl;
        }
    }
    //fr(i, sizeof(d))cout<<d[i]<<" ";
}


int main()
{
    ll n,m,i,j,k;
    ll t;
    cin>>t;

    tcas(x,t)
    {
        ll ans=-1;
        fr(i,105)v[i].clear();

        ll a,b;
        cin>>n>>m;
        fr(i,m)
        {
            cin>>a>>b;
            v[a].pb(b);
            v[b].pb(a);
        }
        ll s,d;
        cin>>s>>d;

        memset(dist1, 0, sizeof(dist1));
        memset(dist2, 0, sizeof(dist2));
        bfs(s, dist1 );
        //cout<<endl;
        bfs(d, dist2 );

        fr(i, n)   ans=max(ans, dist1[i] +dist2[i]);

        pcas(x), pfl(ans);
        //printf("Case %lld: %lld\n", x, ans);
    }
}
