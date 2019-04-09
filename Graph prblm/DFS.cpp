#include<bits/stdc++.h>
using namespace std;
vector<int>node[1000];    ///adjacency metrix ;
bool visited[100000];

int dfs(int n, vector<int>node[])
{
    visited[n]=true;

    for(int i=0; i<node[n].size(); i++)
    {
        // cout<<node[n][i]<<" ->"<<endl;
        if(visited[node[n][i]]==false)
        {
            cout<<node[n][i]<<" ";
            dfs(node[n][i], node);
        }
    }
}
int main()
{
    int vertex, edge,i,a,b;
    printf("Enter number of vertex :\n");
    cin>>vertex;
    printf("Enter number of edge :\n");
    cin>>edge;

    printf("Enter number of edge from where to where :\n");
    for(i=0; i<edge; i++)
    {
        cin>>a>>b;
        node[a].push_back(b);
        node[b].push_back(a);
    }

    for(i=0; i<1000; i++)
    {
        if(!node[i].empty())
        {
            cout<<"["<<i<<" ]"<<"---->";
            //cout<<i+1<<endl;
            for(vector<int>::iterator it=node[i].begin(); it!=node[i].end(); it++)
            {
                cout<<*it<<"--->";
            }
            cout<<"NULL"<<endl;
        }
    }
    cout<<"DFS Traversal ..... "<<endl;
    // cout<<"1"<<" ";
    int x;
    printf("Enter source node \n");
    cin>>x;
    cout<<x<<" ";
    dfs(x,node);

    return 0;
}


