
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
#define INF                 1e9
#define EPS                 1e-8
#define Pi                  acos(-1.0)

#define N 200005

int res[N];
int arr[N];

int dp[N][6];
int n;
int solve(int pos,int prev)
{

    if(pos==n)
    {
        return 1;
    }

    if(dp[pos][prev]!=-1)
        return dp[pos][prev];

    int ret=0;
    if(arr[pos]>arr[pos-1])
    {
        for(int val=prev+1;val<=5;val++)
        {
            res[pos]=val;
            ret|=solve(pos+1,val);

            if(ret)
                break;
        }
    }
    else if(arr[pos]<arr[pos-1])
    {
        for(int val=prev-1;val>=1;val--)
        {
            res[pos]=val;
            ret|=solve(pos+1,val);

            if(ret)
                break;
        }
    }
    else
    {
        for(int val=1;val<=5;val++)
        {
            if(val==prev)
                continue;

            res[pos]=val;
            ret|=solve(pos+1,val);

            if(ret)
                break;
        }

    }

    return dp[pos][prev]=ret;

}


int main()
{


    sci(n);


    for(int i=0;i<n;i++)
    {
        sci(arr[i]);
    }


    memo(dp,-1);
    for(int i=1;i<=5;i++)
    {
        res[0]=i;

        if( solve(1,i) )
        {
            for(int j=0;j<n;j++)
                cout<<res[j]<<" ";
            cout<<endl;
            return 0;
        }

    }
    cout<<"-1"<<endl;




    return 0;
}

/* LL dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* LL dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* LL dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* LL dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction
