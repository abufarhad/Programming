#include<bits/stdc++.h>
using namespace std;
vector<int>v[50];
bool vis[50];
int level[50];
void dfs(int source)
{
    if(vis[source]==false)
    {
        vis[source]=true;
        for(int i=0;i<v[source].size();i++)
        {
            dfs(v[source][i]);
        }
    }
}
void bfs(int source)
{
    queue<int>q;
    q.push(source);
    vis[source]=true;
    while(q.empty()==false)
    {
        int u=q.front();q.pop();
        for(int i=0;i<v[u].size();i++)
        {
            int z=v[u][i];
            if(vis[z]==false)
            {
                q.push(z);
                level[z]=level[u]+1;
                vis[z]=true;
            }
        }
    }
}

int main()
{
    int nedge,nnode,t1,t2,i,source,dest;
    cin>>nnode>>nedge;
    for(i=0;i<nedge;i++)
    {
        cin>>t1>>t2;
        v[t1].push_back(t2);
        v[t2].push_back(t1);
    }
    cin>>source>>dest;
    bfs(source);
    if(vis[dest]==true)
        cout<<"ues"<<level[dest];
    else
        cout<<"no";
}
