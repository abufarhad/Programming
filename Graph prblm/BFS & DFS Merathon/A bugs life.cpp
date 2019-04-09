
///*******************incomplete ******************** http://code.cloudkaksha.org/spoj/spoj-buglife-solution

#include<bits/stdc++.h>
using namespace std;
#define n 2005
#define ll long long
#define pb push_back


bool bfs(vector<ll>graph[], ll n)
{
    bool visited[n+1]= {0};
    ll colour[n+1];
    ll node,flag=0;
    memset(visited,0, sizeof(visited));
    memset(color,-1, sizeof(color));

    fr1(k,n)
    {
        if(!visited[k])
        {
            ll i,u;
            queue<ll>q;
            colour[k]=1;
            q.push(k);

            while(!q.empty())
            {
                ll node=q.front();
                q.pop();
                visited[node]=1;

                for(i=0; i<graph[node].size(); i++)
                {
                    u=graph[s][i];
                    if(colour[u]==-1)
                    {
                        colour[u]=! colour[node];
                    }
                    else if(colour[u]==colour[node])
                    {
                        flag=1;
                        break;
                    }
                    if(!visited[ u ])
                        q.push(u);
                }
                if(flag)
                    break;
            }
        }
        if(flag)
            break;
    }
}
}

int main()
{
    ll m,a,b,i,f,t,j;
    cin>>t;
    for(j=0; j<t; j++)
    {
        ll flag=0;
        cin>>f>>m;
        vector<ll >graph[n];

        for(i=0; i<m; i++)
        {
            cin>>a>>b;
            graph[a].pb(b);
            graph[b].pb(a);
        }


        if(bfs(graph, n))
            printf("Scenario #%lld:\nSuspicious bugs found!\n",j+1);
        else
            printf("Scenario #%lld:\nNo suspicious bugs found!\n",j+1);
    }
    return 0;
}
