#include<bits/stdc++.h>
using namespace std;
bool vis[100];
vector<int>v[100];

void dfs(int source)
{
    if(vis[source]==false){
        vis[source]=true;
        for(int i=0;i<v[source].size();i++){
            dfs(v[source][i]);
        }
    }
}


int main()
{
    int n_node,n_edge;
    cin>>n_node>>n_edge;
    int t1,t2;

    for(int i=0;i<n_edge;i++)
    {
        cin>>t1>>t2;
        v[t1].push_back(t2);
        v[t2].push_back(t1);
    }
    int component=0;
    for(int i=1;i<=n_node;i++){
        if(vis[i]==false){
            dfs(i);
            component++;
        }
    }
    cout<<"COMPONENT : "<<component<<endl;
    return 0;
}
