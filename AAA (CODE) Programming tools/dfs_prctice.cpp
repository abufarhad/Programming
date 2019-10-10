#include<bits/stdc++.h>
using namespace std;
vector<int>v[50];
bool vis[50];

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

    int t1,t2,i;
    for(i=0;i<n_edge;i++){
        cin>>t1>>t2;
        v[t1].push_back(t2);
        v[t2].push_back(t1);

    }
    int source,dest;
    cin>>source>>dest;

    dfs(source);

    if(vis[dest]==true)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
