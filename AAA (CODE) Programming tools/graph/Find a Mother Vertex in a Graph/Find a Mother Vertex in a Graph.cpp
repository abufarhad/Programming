

#include <bits/stdc++.h>
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
#define N 300005

vector<int>v[N];
bool vis[N];


void dfs(int s)
{
    vis[s]=true;

    for(int i=0;i<v[s].size();i++)
    {
        int now=v[s][i];

        if(vis[now]==false)
            dfs(now);
    }
}

int main()
{
    int n,e;
    cin>>n>>e;

    int a,b;
    for(int i=0;i<e;i++)
    {
        cin>>a>>b;
        v[a].push_back(b);
    }

    int vertex=0; /// the vertex from where we will try to check

    memo(vis,false);
    for(int i=0;i<n;i++) /// if all the nodes can be visited from our last visited vertex ...then it will be desired mother vertex.. otherwise no such vertex
    {
        if(vis[i]==false)
        {
            dfs(i);
            vertex=i;
        }
    }

    memo(vis,false);
    dfs(vertex);


    for(int i=0;i<n;i++)
    {
        if(vis[i]==false)
        {
            cout<<"there is no mother vertex in this graph"<<endl;
            return 0;
        }
    }


    cout<<"the mother vertex is "<<vertex<<endl;



    return 0;
}
/* int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction
