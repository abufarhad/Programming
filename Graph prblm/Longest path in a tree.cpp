#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define scf(n)              scanf("%lf", &n)
#define pfl(x)              printf("%lld\n",x)
#define md                  10000007
#define pb                  push_back
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)

vector<ll>gr[10005];

ll dis[10005],node,initial,mx;
bool visited[10005];

int bfs(ll s)
{
    fr(i,node+1)visited[i]=0;
    fr(i,node+1)dis[i]=0;
    queue<ll>q;
    q.push(s);

    visited[s]=1;
    while(!q.empty())
    {
        ll top=q.front();
        q.pop();
        fr(i,gr[top].size())
        {
            ll v=gr[top][i];
            if(visited[v]==0)
            {
                dis[ v ]=dis[top]+1;
                visited[v]=1;
                q.push(v);
            }
        }
    }
        mx=0;
        for(ll i=1; i<=node; i++)
        {
            mx=max(mx,dis[i]);
            if(mx==dis[i])
                initial=i;
        }
}

int main()
{
    ll n,e,i,s,a,b;
    cin>>node;
    for(i=0; i<node-1; i++)
    {
        cin>>a>>b;
        gr[a].push_back(b);
        gr[b].push_back(a);
    }


    bfs(1);
    bfs(initial);
    cout<<mx<<endl;

}


