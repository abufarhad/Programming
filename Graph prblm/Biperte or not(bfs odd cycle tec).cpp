
                ///There is a problem in this code ///
#include<bits/stdc++.h>
using namespace std;

#define pb push_back
bool visit[10000];
vector<int> nd[1000];
int level[1000],i;

bool bfs(int s)
{
    queue<int>q;
    visit[s]=1;
    level[s]=0;
    q.push(s);

    while(!q.empty())
    {
        s=q.front();
        q.pop();
        for(i=0; i<nd[s].size(); i++)
        {
            int u=nd[s][i];
            if(!visit[u]){
                visit[u]=1;

            level[u]=level[s]+1;
            //cout<<level[u]<<" ";
            q.push(u );
        }
      // cout<<il<< level[s]<<" & " <<level[nd[s][i]];
         if(level[s]==level[u])
            return false;
    }
}
return true ;
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

    bfs(1);
    if(bfs(1))
    {
        cout<<"yes"<<endl;
    }
    else cout<<"no"<<endl;
}
