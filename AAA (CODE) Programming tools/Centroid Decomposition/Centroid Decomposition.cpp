

#include<bits/stdc++.h>
using namespace std;
#define LL                  long long
#define ull                 unsigned long long LL
#define scl(n)              scanf("%lld", &n)
#define scf(n)              scanf("%lf", &n)
#define sci(n)              scanf("%d", &n)
#define scii(n,m)           scanf("%d %d",&n,&m)
#define sciii(n,m,p)        scanf("%d %d %d",&n,&m,&p)

#define MOD                 1000000007
#define MODP                99999999999973LL
#define pb                  push_back
#define mp                  make_pair
#define pp                  pair<LL,LL>
#define memo(a,b)           memset(a,b,sizeof(a))
#define INF                 1e18
#define EPS                 1e-8
#define Pi                  acos(-1.0)
LL bigmod(LL b, LL p, LL md){if(p==0) return 1;if(p%2==1){ return ((b%md)*bigmod(b,p-1,md))%md;} else {LL y=bigmod(b,p/2,md);return (y*y)%md;}}
#define N 50005

vector<int>v[N];
LL ans=0;
bool dead[N];
LL freq[N];
int k;
int child[N];


void dfs(int s,int par)
{
    child[s]=1;
    for(int now:v[s])
    {
        if(now==par || dead[now]) continue;
        dfs(now,s);
        child[s]+=child[now];
    }
}

void freq_dfs(int s, int par,int l,int val)
{

    if(l<=k)
    {
        freq[l]+=val;
    }

    for(int now:v[s])
    {
        if(now==par || dead[now]) continue;
        freq_dfs(now,s,l+1,val);
    }

}

void call_dfs(int s,int par,int l)
{
    if(l<=k)
    {
        ans+=freq[k-l];
    }

    for(int now:v[s])
    {
        if(now==par || dead[now]) continue;
        call_dfs(now,s,l+1);
    }
}

int centroid(int s,int p,int sz)
{
    for(int now:v[s])
    {
        if(now!=p && !dead[now] && child[now]>sz)
            return centroid(now,s,sz);
    }
    return s;
}


void decompose(int s,int p)
{
    dfs(s,p);
    int c=centroid(s,p,child[s]/2);
    dead[c]=true;


    for(int now:v[c])
    {
        if(!dead[now])
        {
            call_dfs(now,c,1);
            freq_dfs(now,c,1,1);
        }
    }

    for(int now:v[c])
    {
        if(!dead[now])
        {
            freq_dfs(now,c,1,-1);
        }
    }

    for(int now:v[c])
    {
        if(!dead[now])
        {
            decompose(now,c);
        }
    }
}


int main()
{
    int n;
    cin>>n>>k;

    for(int i=0;i+1<n;i++)
    {
        int a,b;
        cin>>a>>b;
        v[a].pb(b);
        v[b].pb(a);
    }
    freq[0]=1;
    decompose(1,0);
    cout<<ans<<endl;

    return 0;
}



/* LL dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* LL dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* LL dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* LL dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction
