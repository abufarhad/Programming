
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

int weight[N];                   /// 0 based indexed
int root[N];
int sz[N];


int find_root(int x)
{
    if(root[x]==x)
        return x;

    root[x]=find_root(root[x]);
    return root[x];
}




int main()
{
    int n;
    sci(n);

    for(int i=0;i<n;i++)
        sci( weight[i] );

    for(int i=0;i<n;i++)
    {
        root[i]=i;
        sz[i]=1;
    }

    for(int i=1;i<n;i++)
    {
        int a,b;
        scii(a,b);
        a--;
        b--;

        int root_a=find_root(a);
        int root_b=find_root(b);

        if(root_a!=root_b && weight[a]%2==0 && weight[b]%2==0)
        {

            if(sz[root_a ]>=sz[root_b])
            {
                root[ root_b ]=root_a;
                sz[root_a]+=sz[root_b];
                sz[root_b]=0;
            }
            else
            {
                root[ root_a ]=root_b;
                sz[root_b]+=sz[root_a];
                sz[root_a]=0;

            }

        }


    }

    int ans=0;

    for(int i=0;i<n;i++)
    {
        if(weight[i]%2==0)
        {
            ans=max(ans,sz[i]);
        }
    }
    cout<<ans<<endl;



}

/* int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction


/*

7
1 2 6 4 2 0 3
1 2
1 3
2 4
2 5
4 6
6 7

*/
///answer 4
