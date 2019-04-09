/// https://www.e-olymp.com/en/problems/1060

#include<bits/stdc++.h>
using namespace std;
#define m 100000
#define ll long long
vector<int>nd[m];
int  visit[m];

int bfs(int s)
{
    int cnt=0, cn=0;
    queue<int>q;
    visit[s]=1;
    q.push(s);
    while(!q.empty())
    {
        s=q.front();
        q.pop();
        for(int i=0; i<nd[s].size(); i++)
        {
            int u=nd[s][i] ;
            if(visit[u]==-1)
            {
                visit[u]=1-visit[s];

                cnt++;
                q.push(u );
            }
            else
                cn++;
        }
    }
    return max(cnt,cn);
}

int main()
{
    ll a,n,b,i,t;
        cin>>n;
        for(i=0; i<n; i++)
        {
            nd[i].clear();
        }
        for(i=0; i<n; i++)
        {
            cin>>a>>b;
            nd[a].push_back(b);
            nd[b].push_back(a);
        }
        memset(visit, -1, sizeof(visit));

    return 0;
}

