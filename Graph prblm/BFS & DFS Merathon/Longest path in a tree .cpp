#include<bits/stdc++.h>
using namespace std;
#define Edges 10010

vector<int> V[Edges];

bool vis[Edges];
int dist[Edges];

void dfs(int vert,int d)
{
    vis[vert]=true;
    dist[vert]=d;

    for(int u=0; u<V[vert].size(); u++)
        if(!vis[V[vert][u]])
            dfs(V[vert][u],d+1);
}

int main()
{
    int n,a,b,i;
    int start_node,max_dist;
    cin>>n;

    for(i=0; i<Edges; i++)
    {
        V[i].clear();
        vis[i]=false;
    }

    for(i=0; i<n-1; i++)
    {
        cin>>a>>b;
        V[a].push_back(b);
        V[b].push_back(a);
    }
    dist[0]=0;

    dfs(1,0);
    start_node=0;

    for(i=1; i<=n; i++)
        if(dist[i]>dist[start_node])
            start_node=i;

    memset(vis,0,sizeof(vis));

    dfs(start_node,0);
    max_dist=0;
    for(i=1; i<=n; i++)
        max_dist=max_dist>dist[i]?max_dist:dist[i];

    cout<<max_dist;
}

