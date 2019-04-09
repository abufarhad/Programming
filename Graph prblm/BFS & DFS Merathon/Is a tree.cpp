#include<bits/stdc++.h>
using namespace std;
vector<int> adj[20000];
bool visited[20000]= {0};
int ans=-1;
int dfs(int s)
{
    visited[s]=1;
    ans++;
    //cout<<ans<<endl;
    for(int i=0; i<adj[s].size(); i++)
    {
        if(!visited[adj[s][i]])
        {
            ans++;
            dfs(adj[s][i]);
        }
    }

}

int main()
{

    int n,e,i,s,a,b;
    cin>>n>>e;
    for(i=0; i<e; i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1);
    cout<<ans<<endl;
    if(n==e+1&&n==ans+1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

