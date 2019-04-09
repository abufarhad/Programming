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
//    for(i=0; i<n; i++)
//    {
//        colour[i]=-1;
//    }
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

int m,a,b,i,t;
    cin>>m;
    for(i=0; i<m; i++)
    {
        cin>>a>>b;
        nd[a].pb(b);
        nd[b].pb(a);
    }
//    for(i=0; i<n; i++)
//    {
//        colour[i]=-1;
//    }
    memset(colour,-1,sizeof(colour));
    if(bfs(1))
    {
        cout<<"yes"<<endl;
    }
    else cout<<"no"<<endl;
}
