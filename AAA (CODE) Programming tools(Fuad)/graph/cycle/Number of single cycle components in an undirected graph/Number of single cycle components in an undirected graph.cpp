
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b)          for(i=a;i<b;i++)
#define repr(i,a,b)         for(i=a;i>=b;i--)

#define LL                  long long
#define ull                 unsigned long long int
#define scl(n)              scanf("%lld", &n)
#define scf(n)              scanf("%lf", &n)
#define sci(n)              scanf("%d", &n)
#define scii(n,m)           scanf("%d %d",&n,&m)
#define sciii(n,m,p)        scanf("%d %d %d",&n,&m,&p)
#define scs(n)              scanf("%s", n)
#define pfi(n)              printf("%d\n",n)
#define pfl(n)              printf("%I64d ",n)
#define pfs(s)              printf("%s\n",s)

#define MOD                 1000000007
#define pb                  push_back
#define ff                  first
#define ss                  second
#define mp                  make_pair
#define pp                  pair<int,int>
#define memo(a,b)           memset(a,b,sizeof(a))
#define INF                 1e9
#define EPS                 1e-8
#define Pi                  acos(-1.0)

#define N 100005


bool cycle;
vector<int>v[N];
bool vis[N];

int deg[N];

void dfs(int s)
{
    vis[s]=true;
    if(deg[s]!=2)
    {
        cycle=false;
    }

    for(int i=0;i<v[s].size();i++)
    {
        int now=v[s][i];

        if(vis[now]==false)
        {
            dfs(now);
        }
    }
}


int main()
{
    int n,m;
    scii(n,m);


    for(int i=0;i<m;i++)
    {
        int a,b;
        scii(a,b);
        deg[a]++;
        deg[b]++;
        v[a].pb(b);
        v[b].pb(a);

    }

    int cycle_cnt=0;
    for(int i=1;i<=n;i++)
    {


        if(vis[i]==false)
        {
            cycle=true;
            dfs(i);

            if(cycle==true)
                cycle_cnt++;

        }
    }
    cout<<cycle_cnt<<endl;


}

/*
15 14
1 10
1 5
5 10
2 9
9 15
2 15
2 12
12 15
13 8
6 14
14 3
3 7
7 11
11 6



 int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction
