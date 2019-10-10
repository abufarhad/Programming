

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
#define MODP                99999999999973LL
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

int color[N];

vector<int>v[N];

bool cycle=false;

void dfs(int s)
{
    color[s]=1;


    for(int i=0;i<v[s].size();i++)
    {
        int now=v[s][i];


        if(color[now]==1)
        {
            cycle=true;
            cout<<"from "<<s<<" "<<now<<endl;

        }
        else
            dfs(now);
    }
    color[s]=2;
}



int main()
{
    int n,m;
    scii(n,m);

    for(int i=1;i<=n;i++)
    {
        int tem;
        sci(tem);

        while(tem>0)
        {
            int a;
            sci(a);
            v[i].pb(a);
            tem--;

        }

    }
    int s;
    sci(s);
    dfs(s);

    if(cycle)
        cout<<"cycle"<<endl;
    else
        cout<<"no cycle"<<endl;



}

/* int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction
