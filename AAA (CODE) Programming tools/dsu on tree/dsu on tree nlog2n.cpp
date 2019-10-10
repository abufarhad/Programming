

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
vector<int>v[N];
int col[N];
int sz[N];
map<int,int>cnt[N];


void getsz(int s,int par)
{
    sz[s]=1;

    for(int i=0;i<v[s].size();i++)
    {

        int now=v[s][i];
        if(now!=par)
        {
            getsz(now,s);
            sz[s]+=sz[now];
        }


    }

}

void dfs(int s,int par)
{

    int mx=-1,bigchild=-1;

    for(int i=0;i<v[s].size();i++)
    {
        int now=v[s][i];

        if(now!=par)
        {
            dfs(now,s);

            if(sz[now]>mx)
            {
                mx=sz[now];
                bigchild=now;
            }
        }



    }

    if(bigchild!=-1)
        cnt[s]=cnt[bigchild];

    cnt[s][ col[s] ]++;

     for(int i=0;i<v[s].size();i++)
    {
        int now=v[s][i];

        if( now==par || now==bigchild)
            continue;
        else
        {
            for( map<int,int>::iterator it=cnt[now].begin();it!=cnt[now].end();it++ )
            {
                cnt[s][it->first]+=it->second;
            }
        }
    }


}



int main()
{
    int n,q;
    sci(n);
    sci(q);

    for(int i=1;i<=n;i++)
        sci(col[i]);

    for(int i=1;i<n;i++)
    {
        int a,b;
        scii(a,b);
        v[a].pb(b);
        v[b].pb(a);
    }
    getsz(1,1);
    dfs(1,1);

    while(q--)
    {
        int node,col;
        scii(node,col);

        cout<<"ans : "<<cnt[node][col]<<endl;
    }




}

/* int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
//9 10
//10 11 10 11 12 11 10 11 12
//1 2
//2 4
//2 5
//2 6
//1 3
//3 7
//7 8
//8 9




/* int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction
