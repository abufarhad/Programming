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

vector<ll>v[10005];
bool vis[10005];
ll cnt;
ll can_reach[10005];
void bfs(ll s)
{
    memset(vis, 0, sizeof(vis));
    queue<ll>q;
    vis[s]=1;
    q.push(s);
    can_reach[s]++;
    while(!q.empty())
    {
        ll x=q.front();
        q.pop();
        fr(i, v[x].size())
        {
            ll y=v[x][i];
            if(!vis[y])
            {
                can_reach[y]++;
                vis[y]=1;
                q.push(y);
            }
        }
    }
}

int main()
{
    ll n,m,i,j,k;
    ll t;
    cin>>t;

    tcas(x,t)
    {
        ll ans;
        fr(i,10005)v[i].clear(), can_reach[i]=0;

        ll a,b;
        cin>>k>>n>>m;
        ll man[k];
        fr(i,k)cin>>man[i];

        fr(i,m)
        {
            cin>>a>>b;
            v[a].pb(b);
        }

        fr(i,k)
        {
           bfs(man[i]) ;
        }
        ans=0;

        /* If cnt[i] == k, that means i'th city can be reached by all K people, hence
		a possible picnic location */
        fr1(i, n)
        {
            if(can_reach[i ]==k )ans++;
        }

        pcas(x), pfl(ans);

    }
}
