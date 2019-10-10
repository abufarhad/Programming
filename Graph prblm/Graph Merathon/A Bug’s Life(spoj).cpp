#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back


ll bfs(vector<ll>g[],  ll n )
{
    bool visited[n+1]={0};
    ll colour[n+1];
    ll nd, flag=0;

    memset(visited, 0, sizeof(visited) );
    memset(colour, -1, sizeof(colour) );

    fr1(i, n)
    {
        if(!visited[i])
        {
            queue<ll>q;
            q.push(i);
            colour[i]=1;
            while(!q.empty())
            {
                nd=q.front();
                q.pop();
                visited[nd]=1;
                fr(j,g[nd].size() )
                {
                    ll v=g[nd][j];
                    if(colour[ v ]==-1)colour[v] = !colour[nd];
                    if(colour[v]==colour[nd] ){ flag=1; break;}
                    if(!visited[v] )q.push(v);
                }
                if(flag)break;
            }
        }
        if(flag)break;
    }
    return flag;
}

int main()
{
    ll m,n,i,k,l,t,r,cnt=0,a,b;

    cin>>t;
    fr1(j,t)
    {
        ll node, edge;
        cin>>node>>edge;
        vector<ll>g[node+1];

        fr(i,edge)
        {
            cin>>a>>b;
            g[a].pb(b);
            g[b].pb(a);
        }
        printf("Scenario #%d:\n",j);

        if(bfs(g, node) ) cout<<"Suspicious bugs found!"<<endl;
        else cout<<"No suspicious bugs found!"<<endl;

    }
}
