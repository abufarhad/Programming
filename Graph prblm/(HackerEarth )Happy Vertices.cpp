/*
#include<bits/stdc++.h>
using namespace std;
vector<int> node[10000];
bool visited[100]= {0};
int ans[1000],parent[1000],cnt=0;

int dfs(int n)
{
    visited[n]=1;
    for(int i=0; i<node[n].size(); i++)
    {
        if(visited[node[n][i]]==0)
        {
         //   cout<<node[n][i]<<" ";
            ans[n]++;
            dfs(node[n][i]);
            parent[node[n][i]]=n;
        }
    }
    return ans[n];
}


int a,b;
int main()
{
    int n,m,e,i;
    cin>>n>>m;
    for(i=0; i<m; i++)
    {
        cin>>a>>b;
        a--,b--;
        node[a].push_back(b);
        node[b].push_back(a);
    }

    for(i=0; i<n; i++)
    {
            dfs(i);
    //
    }
//cout<<"Ans----- "<<endl;
    for(i=0; i<n; i++)
    {
        //cout<<ans[i]<<endl;
        if(ans[i]> ans[parent[i]] )
        {
            cnt++;
        }
        //cout<<ans[i]<<" "<<ans[parent[i]]<<endl;
    }
    cout<<cnt<<endl;
    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
vector<int> Graph[100005];

int cnt =0;
bool visited[100005];
int n,m;
int T=0;
void dfs(int s)
{

visited[s] = true;
for(int i=0;i<Graph[s].size();i++)
{

if(!visited[Graph[s][i]])
{

if(T==0)
{

//cout<<"s  "<<s<< " Graph[s].size() : "<<Graph[s].size()<<" Graph[Graph[s][i]].size() : "<<Graph[Graph[s][i]].size()<<endl;
if( Graph[s].size() < Graph[Graph[s][i]].size()-1) cnt++;
T= 1;

}
else
{
//cout<<"s  "<<s<< " Graph[s].size()  -"<<Graph[s].size()<<" Graph[Graph[s][i]].size()  -"<<Graph[Graph[s][i]].size()<<endl;

if(Graph[s].size() < Graph[Graph[s][i]].size()) cnt++;
}

dfs(Graph[s][i]);
}

}
}
int main()
{

scanf("%d %d",&n,&m);
memset(visited,false,sizeof(visited));

for(int i=1;i<=m;i++)
{
int u,v;
scanf("%d%d",&u,&v);
Graph[u].pb(v);
Graph[v].pb(u);
}

for(int i=1;i<=n;i++)
{
dfs(i);
T=0;
}
printf("%d\n",cnt);
}

