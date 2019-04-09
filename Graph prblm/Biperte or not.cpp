#include<bits/stdc++.h>
using namespace std;

#define pb push_back
bool visit[10000];
vector<int> nd[1000];
int level[1000],end;

bool bfs(int start)
{
    queue<int>q;
    visit[start]=1;
    level[start]=0;
    q.push(start);

    while(!q.empty())
    {
        start=q.front();
        q.pop();
        for(end=0; end<nd[start].size(); end++)
        {
            if(!visit[nd[start][end]]){
                visit[nd[start][end]]=1;
            int u=nd[start][end];
            level[u]=level[start]+1;
            //cout<<level[u]<<" ";
            q.push(u );
        }
       cout<<endl<< level[start]<<" & " <<level[nd[start][end]];
         if(level[start]==level[nd[start][end]])
            return false;
    }
}
return 1 ;
}
int main()
{
    int i,m,n,edge,vtx;
    cin>>edge;
    for(i=0; i<edge; i++)
    {
        cin>>m>>n;
        nd[m].pb(n);
        nd[n].pb(m);
    }
    int source;
    cin>>source;
    bfs(source);
    if(bfs(source))
    {
        cout<<"yes"<<endl;
    }
    else cout<<"no"<<endl;
}
