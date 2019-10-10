#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pb                  push_back
#define scl(n)              scanf("%lld", &n)


vector<ll>vt[30005], cost[ 30005];
ll dis[30005],dis1[30005];
ll n,a1,a2,cnt=0,p;

void bfs(ll s)
{
    fr(i,n)dis[i]=-1;
    ll mx=-1;

    queue<ll>q;
    q.push(s);
    dis[s]=0;

    while(!q.empty())
    {
        ll x=q.front();
        q.pop();
        if(mx<dis[x])  mx=dis[x], p=x;

        fr(i, vt[x].size())
        {
            ll y=vt[x][i];
            if(dis[y]==-1)   dis[y]=dis[x]+cost[x][i], q.push(y);
        }
    }
}

void bfs1(ll s)
{
    fr(i,n)dis1[i]=-1;

    queue<ll>q;
    q.push(s);
    dis1[s]=0;

    while(!q.empty())
    {
        ll x=q.front();
        q.pop();

        fr(i, vt[x].size())
        {
            ll y=vt[x][i];
            if(dis1[y]==-1)   dis1[y]=dis1[x]+cost[x][i], q.push(y);
        }
    }
}


int main()
{
    ll t, x=1, u, v, w;
    scl(t);
    while(t--)
    {
        scl(n);
        fr1(i, n-1)
        {
            scl(u), scl(v), scl(w);

            vt[u].pb(v);
            vt[v].pb(u);
            cost[u].pb(w);
            cost[v].pb(w);
        }
        bfs(0);     //  find an ending point of farthest node
        a1=p;

        bfs(a1);   //find another ending point a2 and distance from a1
        a2=p;

        bfs1(a2); //calculating distance from a2

        printf("Case %lld:\n",x++);

        fr(i,n)printf("%lld\n",max(dis[i], dis1[i])), vt[i].clear(), cost[i].clear();
    }
}



