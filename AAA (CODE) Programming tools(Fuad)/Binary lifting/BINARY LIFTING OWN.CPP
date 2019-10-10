#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(i=a;i<b;i++)
#define repr(i,a,b) for(i=a;i>=b;i--)
#define LL long long
#define ull unsigned long long
#define scl(n) scanf("%lld", &n)
#define scf(n) scanf("%lf", &n)
#define sci(n) scanf("%d", &n)
#define scii(n,m) scanf("%d %d",&n,&m)
#define sciii(n,m,p) scanf("%d %d %d",&n,&m,&p)
#define scs(n) scanf("%s", n)
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define memo(a,b) memset(a,b,sizeof(a))
#define INF 1e9
#define EPS 1e-8
#define Pi acos(-1.0)
#define N 1000
#define LG 20

vector<int>v[N];
int p[N][LG];
int level[N];

void dfs(int u,int par)
{
    level[u]=level[par]+1;
    p[u][0]=par;
    for(int i=0;i<v[u].size();i++)
    {
        int now=v[u][i];

        if(now==par)
            continue;
        dfs(now,u);
    }
}


int lca(int u,int v)
{
    if(level[u]<level[v])
        swap(u,v);

    int lg;

    for(lg=0;(1<<lg)<=level[u];lg++  );


    lg--;

    for(int i=lg;i>=0;i--) ///after this u and v must be in same level
    {
        if(level[u]-(1<<i)>=level[v])
            u=p[u][i];
    }

    if(u==v)
        return u;


    for(int i=lg;i>=0;i-- )
    {


        if(p[u][i]!=-1 and ( p[v][i]!=p[u][i] ))
        {
            u=p[u][i];
            v=p[v][i];
        }
    }

    return p[u][0];



}

int dis(int u,int v)
{
    int lca_of_u_v=lca(u,v);

    return level[u]+level[v]-2*level[lca_of_u_v];
}

int main()
{
    int n,m;
    cin>>n;
    cin>>m;

    for(int i=1;i<n;i++)
    {
        int a, b;
        cin>>a>>b;
        v[a].pb(b);
        v[b].pb(a);
    }

    level[0]=-1;

    memo(p,-1);
    dfs(1,-1);

    for(int i=1;i<LG;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(p[j][i-1]!=-1)
                p[j][i]=p[ p[j][i-1] ][i-1];
        }
    }




   while(m--)
   {
       int u,v;
       scii(u,v);

       cout<<" lca : "<<lca(u,v)<<"  dis :"<<dis(u,v)<<endl;

   }

    return 0;
}

///input

/*
10
1 3
1 2
2 6
2 7
3 4
3 5
4 8
5 9
8 10



*/
