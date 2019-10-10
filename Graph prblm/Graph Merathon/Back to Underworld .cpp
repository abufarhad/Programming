#include<bits/stdc++.h>
using namespace std;
#define m 20005
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
vector<ll>nd[m];
ll  colour[m], vampire=0, lykan=0, ans=0;
ll white=0, black=1,red=2;

void bfs(ll s)
{
    queue<ll>q;
    colour[s]=black; // consider as  vampire
    vampire++;
    q.push(s);

    while(!q.empty())
    {
        ll u=q.front();
        q.pop();
        fr(i, nd[u].size() )
        {
            ll v=nd[u][i];
            if(colour[v ]==0)
            {
                q.push(v);
                if(colour[u]==black)
                {
                    colour[v]=red;
                    lykan++;
                }
                else
                {
                    colour[v]=black;
                    vampire++;
                }
            }
        }
    }
}

int main()
    {
        ll a,n,b,i,t;
        cin>>t;
        for(ll j=1; j<=t; j++)
        {
            for(i=0; i<=m; i++) nd[i].clear();

            memset(colour, 0, sizeof(colour));

            vampire=0, lykan=0, ans=0;

            cin>>n;
            for(i=0; i<n; i++)
            {
                cin>>a>>b;
                nd[a].push_back(b);
                nd[b].push_back(a);
            }
            fr(i,m)
            {
                if(!nd[i].empty() && colour[i]==0)
                {
                    vampire=0, lykan=0;
                    bfs(i);
                    ans+=max(vampire, lykan);
                }
            }
            printf("Case %lld: %lld\n",j,ans);
        }
        return 0;
    }
