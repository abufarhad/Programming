#include<bits/stdc++.h>
using namespace std;
#define n 1000
#define pb push_back
vector<int>nd[1000];
bool visit[n];
int colour[n];

bool bfs(int s)
{
    int i,u;
    queue<int>q;
    colour[s]=1;
    q.push(s);

    while(!q.empty())
    {
        s=q.front();
        q.pop();
        for(i=0; i<nd[s].size(); i++)
        {
            u=nd[s][i];
            if(colour[u]==-1)
            {
                colour[u]=1-colour[s];
                q.push(u);
            }
            else if(colour[u]==colour[s]) return false;
        }
    }
    return true ;
}


int main()
{
    int m,a,b,i,f,t;
    while(cin>>t)
    {
        if(!t) return 0;
        else
        cin>>m;
        for(i=0; i<t; i++)
        {
            nd[i].clear();
        }
        for(i=0; i<m; i++)
        {
            cin>>a>>b;
            nd[a].pb(b);
            nd[b].pb(a);
        }

        memset(colour,-1,sizeof(colour));
        if(bfs(1))
        {
            cout<<"BICOLORABLE."<<endl;
        }
        else cout<<"NOT BICOLORABLE."<<endl;
    }

    return 0;
}
