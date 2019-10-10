///http://www.riptutorial.com/dynamic-programming/example/25808/minimum-vertex-cover

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
vector<int>v[N];

int dp[N][2];
int par[N];


int fun(int s,int g)
{
    if(dp[s][g]!=-1)
        return dp[s][g];


    int sum=0;

    for(int i=0;i<v[s].size();i++)
    {
        int now=v[s][i];

        if(now!=par[s])
        {
            par[now]=s;
            if(g==0)
                sum+=fun(now,1);
            else
                sum+=min(fun(now,0),fun(now,1));


        }

    }

    dp[s][g]=sum +g;

    return dp[s][g];
}

int main()
{
    int n;
    sci(n);

    for(int i=1;i<n;i++)
    {
       int a,b;
       scii(a,b);
       v[a].pb(b);
       v[b].pb(a);
    }
    memo(dp,-1);

    cout<<min(fun(1,0),fun(1,1))<<endl;



    return 0;
}

/* int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction
