#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
//using namespace __gnu_pbds;

//typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

#define LL                  long long
#define ull                 unsigned long long
#define scl(n)              scanf("%lld", &n)
#define scf(n)              scanf("%lf", &n)
#define sci(n)              scanf("%d", &n)
#define scii(n,m)           scanf("%d %d",&n,&m)
#define sciii(n,m,p)        scanf("%d %d %d",&n,&m,&p)
#define scs(n)              scanf("%s", n)
#define pfi(n)              printf("%d\n",n)
#define pfl(n)              printf("%I64d ",n)
#define pfs(s)              printf("%s\n",s)
#define bug1		        printf("bug1")
#define	bug2			    printf("bug2")
#define	bug3		        printf("bug3")

#define FASTREAD            ios_base::sync_with_stdio(0);cin.tie(nullptr);
#define MOD                 1000000007
#define MODP                99999999999973LL
#define pb                  push_back
#define mp                  make_pair
#define pp                  pair<LL,LL>
#define memo(a,b) 2          memset(a,b,sizeof(a))
#define INF                 1e9+5
#define EPS                 1e-8
#define Pi                  acos(-1.0)

LL bigmod(LL b, LL p, LL md){if(p==0) return 1;if(p%2==1){ return ((b%md)*bigmod(b,p-1,md))%md;} else {LL y=bigmod(b,p/2,md);return (y*y)%md;}}

#define N 200005



LL fact[N+5];

void init()
{
    fact[0]=1;
    fact[1]=1;
    for(LL i=2;i<N;i++)
    {
        fact[i]=(fact[i-1]*i)%MOD;
    }
}

LL ncr(LL n,LL r)
{
    if(n==r || r==0)
        return 1LL;
    if(r==1)
        return n;
    return fact[n]* bigmod(( fact[r]*fact[n-r])%MOD,MOD-2,MOD )%MOD;

}


int main()
{
    while(1)
    {
        LL n,r;
        cin>>n>>r;
        cout<<ncr(n,r)<<endl;
    }

   return 0;
}

/* LL dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* LL dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* LL dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* LL dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction
