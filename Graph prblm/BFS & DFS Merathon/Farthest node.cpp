#include<bits/stdc++.h>
using namespace std;
#define MAX 30000
#define  sfff(a,b,c)  scanf("%d%d%d",&a,&b,&c)
#define sf(a)         scanf("%d",&a)
#define pf            printf
#define loop(i,n)       for(int i=0;i<n;i++)
#define REP(i,a,b)      for(int i=a;i<b;i++)
#define TEST_CASE(t)    for(int z=1;z<=t;z++)
#define PRINT_CASE      printf("Case %d:\n",z)
#define pb(a)   push_back(a)

vector<int>nd[MAX], cost[MAX];
int  visit[MAX];
int dis[MAX], dis1[MAX], max_dis, x,y,u,n,i;

void bfs(int s)
{
    dis[s]=0;
    queue<int>q;
    q.push(s);
    while(!q.empty())
    {
        int f=q.front();
        q.pop();
        if(dis[f]>max_dis)
        {
            max_dis=dis[f];
            x=f;
        }
        for(i=0; i<nd[f].size(); i++)
        {
            u=nd[f][i];
            if(dis[u]==-1)
            {
                dis[u]=dis[f]+cost[f][i];
                q.push(u);
            }
        }
    }
}

void bfs1(int s)
{
    dis1[s]=0;
    queue<int>q;
    q.push(s);
    while(!q.empty())
    {
        int f=q.front();
        q.pop();

        for(i=0; i<nd[f].size(); i++)
        {
            u=nd[f][i];
            if(dis1[u]==-1)
            {
                dis1[u]=dis1[f]+cost[f][i];
                q.push(u);
            }
        }
    }
}

void allclear( )
{
    for( i=0; i<n; i++)
    {
        nd[i].clear();
        cost[i].clear();
        dis[i]=-1;
        dis1[i]=-1;
    }
    max_dis=-1, x=-1,y=-1;
}


int main()
{
    int a,b,t,w;
    sf(t);
    for(int j=1; j<=t; j++)
    {
        allclear();
        sf(n);
        for(i=0; i<n-1; i++)
        {
            sfff(a,b,w);
            nd[a].push_back(b);
            nd[b].push_back(a);
            cost[a].push_back(w);
            cost[b].push_back(w);
        }
        bfs(0);
        y=x;
        for(i=0; i<n; i++)
            dis[i]=-1;
            max_dis=-1;

        bfs(y);
        y=x;
        bfs1(y);

        printf("Case %d: \n",j);
        for(i=0; i<n; i++)
        {
           pf("%d\n", max(dis[i],dis1[i]) );
        }
    }
    return 0;
}
