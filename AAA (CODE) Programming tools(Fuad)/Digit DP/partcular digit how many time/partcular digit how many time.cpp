

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


int dp[12][12][12];
vector<int>num;
int d,k;

int call(int pos,int cnt,int f )
{
    if(cnt>k) return 0;

    if(pos==num.size())
    {

        if(cnt==k) return 1;
        return 0;

    }

    if(dp[pos][cnt][f]!=-1) return dp[pos][cnt][f];

    int res=0;

    int lmt;

    if(f==0)
    {
        lmt=num[pos];
    }
    else
    {
        lmt=9;
    }

    for(int dgt=0;dgt<=lmt;dgt++)
    {
        int nf=f;
        int ncnt=cnt;

        if(f==0 && dgt<lmt) nf=1;
        if(dgt==d) ncnt++;
        if(ncnt<=k) res+=call(pos+1,ncnt,nf);
    }

    return dp[pos][cnt][f]=res;


}

int solve(int b)
{
    num.clear();

    while(b)
    {
        num.pb(b%10);
        b=b/10;
    }
    reverse(num.begin(),num.end());

    memo(dp,-1);
    int res=call(0,0,0);
    return res;
}



int main()
{

    int a,b;
    cin>>a>>b>>d>>k;


    int res=solve(b)-solve(a-1);
    cout<<res<<endl;




    return 0;
}

/* int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction
