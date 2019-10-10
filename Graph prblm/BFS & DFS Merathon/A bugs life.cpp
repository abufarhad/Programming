#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back

ll bfs(vector<ll>g[], ll n)
{
    bool v[n+1]={0};
    ll c[n+1];
    ll nd, flg=0;

    memset(c, -1, sizeof(c));
    memset(v, 0,sizeof(v) );

    fr1(i,n)
    {
        if(!v[i])
        {
            queue<ll>q;
            q.push(i);
            c[i]=1;
            while(!q.empty())
            {
                nd=q.front();
                q.pop();
                v[nd]=1;
                fr(j, g[nd].size() )
                {
//                    ll f=g[nd][j];
//                    if(c[ f ]==-1)c[f] = !c[nd];
//                    if(c[f]==c[nd] ){ flg=1; break;}
//                    if(!v[f] )q.push(f);

                    ll f=g[nd][j];
                    if( c[f] ==-1) c[f]= !c[nd]  ;
                    if(c[f]==c[nd] ) {flg=1; break;}
                    if(!v[f])q.push(f);
                }
                if(flg)break;
            }
        }
        if(flg)break;
    }
    return flg;
}

int main()
{
    ll m,n,i,j,k,a,b;
    cin>>k;
    fr1(t,k)
    {
        cin>>m>>n;
        vector<ll>g[m+1];

        fr(i,n)
        {
            cin>>a>>b;
            g[a].pb(b);
            g[b].pb(a);
        }

        printf("Scenario #%lld:\n",t);

       if(bfs(g, m))printf("Suspicious bugs found!\n");
       else printf("No suspicious bugs found!\n");

    }
}
