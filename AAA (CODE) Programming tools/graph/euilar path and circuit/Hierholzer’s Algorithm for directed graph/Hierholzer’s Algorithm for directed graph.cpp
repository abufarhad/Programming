///https://www.geeksforgeeks.org/hierholzers-algorithm-directed-graph/

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

int edge_count[N];

int main()
{

    int n,e;
    scii(n,e);


    for(int i=0;i<e;i++)
    {
        int a,b;
        scii(a,b);
        v[a].pb(b);
    }


    for(int i=0;i<n;i++)
    {
        edge_count[i]=v[i].size();
    }


    vector<int>circuit;
    stack<int>curr_path;

    curr_path.push(0); ///start vertex
    int curr_v=0;


    while(!curr_path.empty())
    {
        if(edge_count[curr_v])
        {

            curr_path.push(curr_v);

            int next_v= v[curr_v].back();
            edge_count[curr_v]--;
            v[curr_v].pop_back();
            curr_v=next_v;



        }
        else
        {
            circuit.pb(curr_v);
            curr_v=curr_path.top();
            curr_path.pop();
        }


    }
    for(int i=circuit.size()-1;i>=0;i--)
    {
        cout<<circuit[i]<<" -> ";
    }












    return 0;
}
3
3
acm
mm
me

/* int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction
