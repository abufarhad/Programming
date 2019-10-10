#include<bits/stdc++.h>
using namespace std;

vector<int>v[100];
bool vis[100];
bool art_point[100];
int parent[100];
int child[100];
int tim=0;
int dis[100];
int low[100];

void dfs(int source )
{
    vis[source]=true;
    dis[source]=low[source]=tim++;

    for(int i=0;i<v[source].size();i++)
    {
        int now=v[source][i];

        if(now==parent[source])
            continue;

        if(vis[now]==false){

            child[source]++;
            parent[now]=source;


            dfs(now);

            low[source]=min(low[source],low[now]);

            if(low[now]>=dis[source])
                art_point[source]=true;
            }else{

                low[source]=min(low[source],dis[now]);
            }
    }

}

int main()
{
    int n_node,n_edge;
    cin>>n_node>>n_edge;

    int from,to;
    for(int i=0;i<n_edge;i++)
    {
        cin>>from>>to;
        v[from].push_back(to);
        v[to].push_back(from);
    }

    int ref_source;
    cin>>ref_source;

    parent[ref_source]=-1;

    dfs(ref_source);

    if(child[ref_source]>1)
        art_point[ref_source]=true;


    cout<<"\n\narticulation points are : " ;
    for(int i=0;i<n_node;i++)
    {
        if(i==ref_source && child[i]<=1)
            continue;
        if(art_point[i]==true)
            cout<<i<<" ";
    }
    return 0;
}
