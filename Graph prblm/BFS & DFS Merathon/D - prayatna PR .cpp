#include<bits/stdc++.h>
using namespace std;
vector<int>node[100000];
bool visited[100000];

void dfs(int a)
{
    visited[a]=true;
    for(int i=0; i<node[a].size(); i++)
    {
        int u=visited[node[a][i]];
        if(u==false)  dfs(node[a][i]);
    }
}
int main()
{
    int vertex,t, edge,i,a,b,n;
    cin>>t;

    while(t--)
    {
        cin>>n>>edge;
        memset(visited, 0, sizeof visited);
        int ans=0;
        for(i=0; i<n; i++)
        {
            node[i].clear();
        }
        for(i=0; i<edge; i++)
        {
            cin>>a>>b;
            node[a].push_back(b);
            node[b].push_back(a);
        }

        for(i=0; i<n; i++)
        {
            if(!visited[i])
            {
                ans++;
                dfs(i);
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}



